//==============================================================================
// Copyright (c) 2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  Cube Sample header
//==============================================================================

#ifndef _CUBE_SAMPLE_H_
#define _CUBE_SAMPLE_H_

#include <dxgi1_4.h>

#ifdef _DEBUG
    #include <dxgidebug.h>
#endif

#include <d3d12.h>
#include <stack>
#include <fstream>
#include <sstream>
#include <atomic>

//#define DISABLE_GPA 1 - Uncomment to disable GPA

#include "GPAInterfaceLoader.h"

/*
 * This sample demonstrates various usage of GPA
 * by drawing a cube.
 */

/// Struct to define an AMD counter
struct CounterInfo
{
    UINT32          m_counterIndex;                     ///< the GPA counter index
    const char*     m_counterName;                      ///< the counter name
    const char*     m_counterDescription;               ///< the counter description
    const char*     m_counterGroup;                     ///< the counter group name
    GPA_Usage_Type  m_usageType;                        ///< internal usage type of counter
    GPA_Data_Type   m_counterDataType;                  ///< the GPA counter data type
    GPA_UUID        m_uuid;                             ///< GPA UUID that uniquely and consistently identifies the counter

    /// Constructor
    CounterInfo():
        m_counterIndex(0u),
        m_counterName(nullptr),
        m_counterDescription(nullptr),
        m_counterGroup(nullptr),
        m_usageType(),
        m_counterDataType(),
        m_uuid()
    {}
};

/// class for cube sample
class CubeSample
{
public:

    /// Get the static instance of the cube sample
    /// \return static instance of the cube sample
    static CubeSample* Instance();

    /// Initializes the cube sample
    void Init();

    /// Draw the cube sample
    void Draw();

    /// Release the cube sample resources
    void Destroy();

    /// Toggles the profiling
    void ToggleProfling();

    /// Toggles the wireframe
    void ToggleWireFrame();

private:

    /// struct for vertex data
    struct VertexData
    {
        float position[4];      ///< position
        float color[4];         ///< color
    };

    /// constructor
    CubeSample();

    /// Intializes the common resource
    /// \return true upon successful execution
    bool InitializeCommonResource();

    /// Initializes the view port resources
    /// \return true upon successful execution
    bool InitializeViewPortResource();

    /// Uploads the cube data to the GPU
    bool UploadCubeData();

    /// Wait for the GPU to finsh executing
    void WaitForGpuToFinish();

    /// Adds the Iunknow to the list and adds a name for it
    void AddIUnknown(IUnknown* pUnknown, const std::string& name);

    using IUnknownNamePair = std::pair<std::wstring, IUnknown*>;                    // type alias for IUnknown name pair
    using IUnknownNameCache = std::stack<IUnknownNamePair>;                         // type alias for stack of IUnknownNamePairs
    using GraphicsCommandList = std::vector<ID3D12GraphicsCommandList*>;            // type alias for the list of graphics command list

    static constexpr unsigned int   ms_frameCount = 2;                              ///< frame count
    static constexpr unsigned int   ms_viewPortCount = 4;                           ///< number of viewports
    static CubeSample*              ms_pCubeSample;                                 ///< static instance of the cube sample

    /// Adds the command list to a list for housekeeping
    /// \param[in] pGraphicsCommandList graphics command list
    void AddCommandList(ID3D12GraphicsCommandList* pGraphicsCommandList);

    /// Resets the pass resources;
    void ResetGpaPassInfo();

    #pragma region CommonResource
    ID3D12Device*                   m_pd3d12Device;                               ///< D3D12 Device
    ID3D12RootSignature*            m_pD3D12RootSignature;                        ///< D3D12 root signature
#ifdef _DEBUG
    ID3D12Debug*                    m_pd3d12DebugInterface;                       ///< D3D12 debug interface
    IDXGIDebug*                     m_pdxgiDebug;                                 ///< DXGI debug interface
#endif
    IDXGIFactory2*                  m_pdxgiFactory2;                              ///< DXGI Factory 2
    ID3D12PipelineState*            m_pfillDrawPipeline;                          ///< solid draw pipeline state
    ID3D12PipelineState*            m_pWireframePipeline;                         ///< wireframe draw pipeline state
    ID3D12Resource*                 m_pVertexBuffer;                              ///< D3D12 vertex buffer
    D3D12_VERTEX_BUFFER_VIEW        m_vertexBufferView;                           ///< vertex buffer view
    ID3D12Resource*                 m_pIndexBuffer;                               ///< D3D12 index buffer
    D3D12_INDEX_BUFFER_VIEW         m_indexBufferView;                            ///< index buffer view
    D3D12_RECT                      m_scissorRect;                                ///< scissor rectangle
    ID3D12Resource*                 m_pRTVResource[ms_frameCount];                ///< D3D12 render target view resource - for dx12 allowed swap effect, we need minimum of two
    HANDLE                          m_fenceEvent;                                 ///< fence event
    ID3D12Fence*                    m_pd3d12Fence;                                ///< Fence
    unsigned int                    m_fenceValue;                                 ///< fence value
    IDXGISwapChain3*                m_pdxgiSwapChain3;                            ///< swap chain
    unsigned int                    m_currentBackBufferIndex;                     ///< current back buffer index of the swap chain
    ID3D12PipelineState*            m_pCurrentPipelineState;                      ///< D3D12 current pipeline state
    ID3D12DescriptorHeap*           m_pd3d12DescriptorHeap;                       ///< D3D12 Descriptor heap
    UINT                            m_RTVdescriptorIncrementSize;                 ///< RTV Descriptor heap increment size
    ID3D12CommandQueue*             m_pd3d12CommandQueue;                         ///< D3D12 command queue
    GraphicsCommandList             m_graphicsCommandListVector;                  ///< D3D12 Graphics Command list vector
    bool                            m_pipelineStateChanged;

    #pragma endregion

    #pragma region Viewports
    class Viewport
    {
    public:
        D3D12_VIEWPORT                  m_viewport;                               ///< view port
        ID3D12GraphicsCommandList*      m_pd3d12CommandList;                      ///< D3D12 command list
        ID3D12CommandAllocator*         m_pd3d12DirectCmdListAllocator;           ///< D3D12 Command Allocator
        bool                            m_viewportInitialized;                    ///< flag indicating viewport size is initialized
        D3D12_RECT                      m_viewPortRect;                           ///< view port size rect
        GPA_CommandListId               m_gpaCommandListId;                       ///< gpa command list id
        unsigned int                    m_sampleId;                               ///< sample id

        /// Constructor
        Viewport();

        /// Intialize the view port
        /// \return true upon successful operation
        virtual bool Init() = 0;

        /// Draws the view port
        virtual void Draw() = 0;

        /// Resets for the next pass
        virtual void ResetForNextPass() = 0;

        /// Iterates over the viewport sample(s)
        virtual void IterateSamples(std::function<void(const unsigned int& sampleIndex)> func) const = 0;

        /// Destructor
        virtual ~Viewport() = default;
    };

    #pragma region TopLeftViewport
    class TopLeftViewport : Viewport
    {
        /*
         * This view port will demonstrate to use GPA with single command list
         */
    public:

        const float m_clearColor[4] = { 0.1f, 0.0f, 0.0f, 0.1f }; // Light Red

        /// Constructor
        TopLeftViewport();

        /// \copydoc Viewport::Init
        bool Init() override;

        /// \copydoc Viewport::Draw
        void Draw() override;

        /// \copydoc Viewport::ResetForNextPass
        void ResetForNextPass() override;

        /// \copydoc Viewport::IterateSamples
        void IterateSamples(std::function<void(const unsigned int& sampleIndex)> func) const override;
    };
    #pragma endregion

    #pragma region TopRightViewport
    class TopRightViewport : Viewport
    {
        /*
        * This view port will demonstrate to use GPA with bundles
        */
    public:

        const float m_clearColor[4] = { 0.0f, 0.1f, 0.0f, 0.1f }; // Light Green

        /// Constructor
        TopRightViewport();

        /// \copydoc Viewport::Init
        bool Init() override;

        /// \copydoc Viewport::Draw
        void Draw() override;

        /// \copydoc Viewport::ResetForNextPass
        void ResetForNextPass() override;

        /// \copydoc Viewport::IterateSamples
        void IterateSamples(std::function<void(const unsigned int& sampleIndex)> func) const override;

    private:
        ID3D12CommandAllocator*         m_pBundleCommandAllocator;              ///< D3D12 Command allocator
        ID3D12GraphicsCommandList*      m_pBundleCmdList;                       ///< D3D12 bundle command list
        GPA_CommandListId               m_gpaCmdListForBundle;                  ///< gpa command list id for the bundle
        unsigned int                    m_bundleSampleId;                       ///< sample id on the bundle
    };
    #pragma endregion

    #pragma region BottomLeftViewport
    class BottomLeftViewport : Viewport
    {
        /*
        * This view port will demonstrate to use GPA across command lists
        */
    public:

        const float m_clearColor[4] = { 0.0f, 0.0f, 0.1f, 0.1f };  // Light Blue

        /// Constructor
        BottomLeftViewport();

        /// \copydoc Viewport::Init
        bool Init() override;

        /// \copydoc Viewport::Draw
        void Draw() override;

        /// \copydoc Viewport::ResetForNextPass
        void ResetForNextPass() override;

        /// \copydoc Viewport::IterateSamples
        void IterateSamples(std::function<void(const unsigned int& sampleIndex)> func) const override;

    private:
        ID3D12CommandAllocator*     m_pSecondCmdListAllocator;             ///< D3D12 Command Allocator
        ID3D12GraphicsCommandList*  m_pSecondCmdList;                      ///< D3D12 Command list
        GPA_CommandListId           m_gpaCmdListForSecondCmdList;          ///< gpa command list id of the second direct command list
    };
    #pragma endregion

    #pragma region BottomRightViewport
    class BottomRightViewport : Viewport
    {
        /*
        * This view port will demonstrate to use GPA across command lists and bundles
        */
    public:

        const float m_clearColor[4] = { 0.1f, 0.1f, 0.1f, 0.1f }; // Gray

        /// Constructor
        BottomRightViewport();

        /// \copydoc Viewport::Init
        bool Init() override;

        /// \copydoc Viewport::Draw
        void Draw() override;

        /// \copydoc Viewport::ResetForNextPass
        void ResetForNextPass() override;

        /// \copydoc Viewport::IterateSamples
        void IterateSamples(std::function<void(const unsigned int& sampleIndex)> func) const override;

    private:
        ID3D12CommandAllocator*         m_pSecondCommandListAllocator;      ///< D3D12 Command allocator
        ID3D12CommandAllocator*         m_pBundleCommandListAllocator;      ///< D3D12 command allocator
        ID3D12GraphicsCommandList*      m_pBundle;                          ///< D3D12 bundle command list
        GPA_CommandListId               m_gpaCmdListForBundle;              ///< gpa command list id for the bundle
        unsigned int                    m_bundleSampleId;                   ///< sample id for the bundle
        unsigned int                    m_bundleSampleIdOnPrimaryCmdList;   ///< sample id of the copied bundle sample
        ID3D12GraphicsCommandList*      m_secondCommandList;                ///< D3D12 second command list
        GPA_CommandListId               m_gpaCmdListForSecondCmdList;       ///< gpa command list id for the secodn direct command list

    };
    #pragma endregion

    #pragma endregion

    #pragma region ViewportResource
    TopLeftViewport                 m_topLeftViewport;                            ///< top left view port
    TopRightViewport                m_topRightViewport;                           ///< top right view port
    BottomLeftViewport              m_bottomLeftViewport;                         ///< bottom left view port
    BottomRightViewport             m_bottomRightViewport;                        ///< bottom right view port
    std::atomic<bool>               m_wireframe;                                  ///< flag indicating wireframe mode is enabled
    IUnknownNameCache               m_appCreatedIUnknown;                         ///< list of all the created unknowns
    std::atomic<bool>               m_profilingEnable;                            ///< flag indicating profiling is enabled or not
    std::vector<unsigned int>       m_profiledFrame;                              ///< list of frame profiled using GPA
    unsigned int                    m_frameCounter;                               ///< frame counter
    std::stringstream               m_content;                                    ///< content stream
    std::stringstream               m_header;                                     ///< header stream
    bool                            m_isHeaderWritten;                            ///< flag indicating header is written or not

    GPAFunctionTable*               m_pGpaFunctionTable;                          ///< GPA function table
    GPA_ContextId                   m_gpaContextId;                               ///< GPA context id
    GPA_SessionId                   m_gpaSessionId;                               ///< GPA session id

    std::vector<CounterInfo>        m_availableCounters;                          ///< GPA available counters
    std::vector<unsigned int>       m_enabledCounters;                            ///< GPA enabled counters
    unsigned int                    m_passRequired;                               ///< number of pass required for the enabled set of counters
    int                             m_currentPass;                                ///< current pass
    bool                            m_isAllCountersEnabled;                       ///< flag indicating all counters are enabled or not
    int                             m_sampleCounter;                              ///< sample counter
    std::string                     m_counterFileName;                            ///< name of the counter data file
    std::string                     m_gpaLogFileName;                             ///< name of the GPA log file
    std::fstream                    m_gpaLogFileStream;                           ///< GPA log file stream
    std::fstream                    m_counterDataFileStream;                      ///< counter data file stream
    std::wstring                    m_executablePath;                             ///< path of the sample executable
    #pragma endregion

public:

    #pragma region GPA_Wrappers
    /// Initializes GPA and open its context
    /// \return true upon successful operation
    bool GPA_InitializeAndOpenContext();

    /// Releases the GPA and closes its context
    /// \return true upon successful operation
    bool GPA_ReleaseContextAndDestroy();

    /// Populates the available counter information from the GPA
    /// \return true upon successful operation
    bool GPA_PopulateAvailableCounterInfo();

    /// Enables all the GPA counters
    /// \return true upon successful operation
    bool GPA_EnableAllCounters();

    /// Creates the GPA profiling session
    /// \return true upon successful operation
    bool GPA_CreateProfilingSession();

    /// Deletes the GPA profiling session
    /// \return true upon successful operation
    bool GPA_DeleteProfilingSession();

    /// Begins the GPA profiling session
    /// \return true upon successful operation
    bool GPA_BeginProfilingSession();

    /// Ends the GPA profiling session
    /// \return true upon successful operation
    bool GPA_EndProfilingSession() const;

    /// Begins workload for the GPA session pass
    /// \return true upon successful operation
    bool GPA_BeginPass();

    /// Ends the GPA session pass
    /// \return true upon successful operation
    bool GPA_EndPass();

    /// Resets the information needed for the next pass
    /// \return true upon successful operation
    bool GPA_NextPassNeeded() const;

    /// Begins the command list for sampling
    /// \param[in] pGraphicsCmdList graphics command list
    /// \param[in, out] gpaCmdId gpa command list upon succesful execution otherwise nullptr
    /// \return true upon successful execution otherwise false
    bool GPA_BeginCommandListForSampling(ID3D12GraphicsCommandList* pGraphicsCmdList, GPA_CommandListId& gpaCmdId) const;

    /// Ends the command list for sampling
    /// \param[in] gpaCmdListId gpa command list
    /// \return true upon successful operation
    bool GPA_EndCommandListForSampling(GPA_CommandListId& gpaCmdListId) const;

    /// Begins GPA sample
    /// \param[in] sampleId sample id
    /// \param[in] gpaCmdListId gpa command list
    /// \return true upon successful operation
    bool GPA_BeginSample(GPA_CommandListId gpaCmdListId, const unsigned int& sampleId) const;

    /// Ends a GPA sample
    /// \param[in] gpaCmdListId gpa command list
    /// \return true upon successful operation
    bool GPA_EndSample(GPA_CommandListId gpaCmdListId) const;

    /// Copies a GPA secondary command list samples on primary command list
    /// \param[in] pSecondaryGpaCmdList primary gpa command list
    /// \param[in] pPrimaryGpaCmdList secondary command list
    /// \param[in] sampleIdList list of sample ids
    /// \return true upon successful operation
    bool GPA_CopyBundleSample(GPA_CommandListId pSecondaryGpaCmdList,
                              GPA_CommandListId pPrimaryGpaCmdList,
                              std::vector<gpa_uint32> sampleIdList) const;

    /// Continues the sample on another command list
    /// \param[in] srcSampleId source sample id
    /// \param[in] gpaCmdId primary command list id
    /// \return true upon successful execution otherwise false
    bool GPA_ContinueSample(unsigned int srcSampleId, GPA_CommandListId gpaCmdId) const;

    /// Populates the session result
    /// \return true upon successful operation
    bool GPA_PopulateSessionResult();

    /// Logs the GPA messages
    /// \return true upon successful operation
    bool GPA_Log(const char* logMessage);

    #pragma endregion

};

#endif // _CUBE_SAMPLE_H_