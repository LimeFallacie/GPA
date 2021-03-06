//==============================================================================
// Copyright (c) 2017-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief GPA Common Context class
//==============================================================================

#ifndef _GPA_CONTEXT_H_
#define _GPA_CONTEXT_H_

#include <list>
#include <mutex>
#include <functional>

#include "GPACommonDefs.h"
#include "GPUPerfAPITypes.h"
#include "IGPAContext.h"
#include "IGPASession.h"

using GPASessionList = std::list<IGPASession*>;         ///< type alias for list of IGPASession objects

/// Abstract GPAContext for common context code
class GPAContext : public IGPAContext
{
public:
    /// Delete default constructor
    GPAContext() = delete;

    /// Destructor
    virtual ~GPAContext();

    /// \copydoc IGPAContext::GetSupportedSampleTypes()
    GPA_Status GetSupportedSampleTypes(GPA_ContextSampleTypeFlags* pSampleTypes) const override;

    /// \copydoc IGPAContext::GetNumCounters()
    GPA_Status GetNumCounters(gpa_uint32* pCount) const override;

    /// \copydoc IGPAContext::GetCounterName()
    GPA_Status GetCounterName(gpa_uint32 index, const char** ppName) const override;

    /// \copydoc IGPAContext::GetCounterGroup()
    GPA_Status GetCounterGroup(gpa_uint32 index, const char** ppGroup) const override;

    /// \copydoc IGPAContext::GetCounterDescription()
    GPA_Status GetCounterDescription(gpa_uint32 index, const char** ppDescription) const override;

    /// \copydoc IGPAContext::GetCounterDataType()
    GPA_Status GetCounterDataType(gpa_uint32 index, GPA_Data_Type* pCounterDataType) const override;

    /// \copydoc IGPAContext::GetCounterUsageType()
    GPA_Status GetCounterUsageType(gpa_uint32 index, GPA_Usage_Type* pCounterUsageType) const override;

    /// \copydoc IGPAContext::GetCounterUuid()
    GPA_Status GetCounterUuid(gpa_uint32 index, GPA_UUID* pCounterUuid) const override;

    /// \copydoc IGPAContext::GetCounterSampleType()
    GPA_Status GetCounterSampleType(gpa_uint32 index, GPA_Counter_Sample_Type* pCounterSampleType) const override;

    /// \copydoc IGPAContext::GetCounterIndex()
    GPA_Status GetCounterIndex(const char* pCounterName, gpa_uint32* pIndex) const override;

    /// \copydoc IGPAContext::GetCounterSourceLocalIndex()
    bool GetCounterSourceLocalIndex(gpa_uint32 exposedCounterIndex, GPACounterSource* pSource, gpa_uint32* pSourceLocalIndex) const override;

    /// \copydoc IGPAContext::ArePublicCountersExposed()
    bool ArePublicCountersExposed() const override;

    /// \copydoc IGPAContext::AreHardwareCountersExposed()
    bool AreHardwareCountersExposed() const override;

    /// \copydoc IGPAContext::AreSoftwareCountersExposed()
    bool AreSoftwareCountersExposed() const override;

    /// \copydoc IGPAContext::GetCounterSource()
    GPACounterSource GetCounterSource(gpa_uint32 internalCounterIndex) const override;

    /// \copydoc IGPAContext::SetInvalidateAndFlushL2Cache()
    void SetInvalidateAndFlushL2Cache(bool shouldInvalidateAndFlushL2Cache) override;

    /// \copydoc IGPAContext::IsInvalidateAndFlushL2CacheEnabled()
    bool IsInvalidateAndFlushL2CacheEnabled() const override;

    /// \copydoc IGPAContext::GetHwInfo()
    const GPA_HWInfo* GetHwInfo() const override;

    /// \copydoc IGPAContext::IsOpen()
    bool IsOpen() const override;

    /// \copydoc IGPAContext::GetDeviceClockMode()
    DeviceClockMode GetDeviceClockMode() const override;

    /// \copydoc IGPAContext::OpenCounters()
    bool OpenCounters() override;

    /// \copydoc IGPAInterfaceTrait::ObjectType()
    GPAObjectType ObjectType() const override;

    /// \copydoc IGPAContext::DoesSessionExist()
    bool DoesSessionExist(GPA_SessionId pSessionId) const override;

    /// \copydoc IGPAContext::GetSessionCount()
    gpa_uint32 GetSessionCount() const override;

    /// \copydoc IGPAContext::BeginSession()
    GPA_Status BeginSession(IGPASession* pGpaSession) override;

    /// \copydoc IGPAContext::EndSession()
    GPA_Status EndSession(IGPASession* pGpaSession) override;

    /// \copydoc IGPAContext::GetActiveSession()
    const IGPASession* GetActiveSession() const override;

protected:

    /// constructor
    /// \param[in] hwInfo the hardware info for the context
    /// \param[in] flags creation flags for context
    GPAContext(GPA_HWInfo& hwInfo, GPA_OpenContextFlags flags);

    /// Marks the context to be opened
    /// \param[in] open flag indicating context to be marked open or closed
    void SetAsOpened(bool open);

    /// Returns whether the device is AMD device or not
    /// \return true if context device is AMD device otherwise false
    bool IsAMDDevice() const;

    /// Adds the GPA session to the session list
    /// \param[in] pGpaSession GPA session object pointer
    GPA_THREAD_SAFE_FUNCTION void AddGpaSession(IGPASession* pGpaSession);

    /// Removes the GPA session from the session list
    /// \param[in] pGpaSession GPA session object pointer
    GPA_THREAD_SAFE_FUNCTION void RemoveGpaSession(IGPASession* pGpaSession);

    /// Iterate over GPA session list for the passed function
    /// \param[in] function function to be executed for each object in the list - function may return false to terminate iteration
    GPA_THREAD_SAFE_FUNCTION void IterateGpaSessionList(std::function<bool(IGPASession* pGpaSession)> function) const;

    ///  Clears the list of the GPA session
    GPA_THREAD_SAFE_FUNCTION void ClearSessionList();

    /// Returns the index of the GPA session if it exists
    /// \param[in] pGpaSession GPA session
    /// \param[out] pIndex index of the the GPA session in the list
    /// \return true if the index was found, false otherwise
    bool GetIndex(IGPASession* pGpaSession, unsigned int* pIndex = nullptr) const;

    GPA_ContextSampleTypeFlags m_supportedSampleTypes;             ///< the supported sample type

private:

    GPA_OpenContextFlags  m_contextFlags;                     ///< context flags
    GPA_HWInfo            m_hwInfo;                           ///< hw info
    bool                  m_invalidateAndFlushL2CacheEnabled; ///< flag indicating flush and invalidation of L2 cache is enabled or not
    bool                  m_isOpen;                           ///< flag indicating context is open or not
    GPASessionList        m_gpaSessionList;                   ///< list of GPA sessions in the context
    bool                  m_isAmdDevice;                      ///< flag indicating whether the device is AMD or not
    mutable std::mutex    m_gpaSessionListMutex;              ///< Mutex for GPA session list
    IGPASession*          m_pActiveSession;                   ///< gpa session to keep track of active session
    mutable std::mutex    m_activeSessionMutex;               ///< mutex for active session
};

#endif // _GPA_CONTEXT_H_
