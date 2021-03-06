// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "IDynamicAnimatedVisualSource.h"


IDynamicAnimatedVisualSourceProperties::IDynamicAnimatedVisualSourceProperties()
    : m_animatedVisualInvalidatedEventSource{static_cast<IDynamicAnimatedVisualSource*>(this)}
{
}

void IDynamicAnimatedVisualSourceProperties::EnsureProperties()
{
}

void IDynamicAnimatedVisualSourceProperties::ClearProperties()
{
}

winrt::event_token IDynamicAnimatedVisualSourceProperties::AnimatedVisualInvalidated(winrt::TypedEventHandler<winrt::IDynamicAnimatedVisualSource, winrt::IInspectable> const& value)
{
    return m_animatedVisualInvalidatedEventSource.add(value);
}

void IDynamicAnimatedVisualSourceProperties::AnimatedVisualInvalidated(winrt::event_token const& token)
{
    m_animatedVisualInvalidatedEventSource.remove(token);
}
