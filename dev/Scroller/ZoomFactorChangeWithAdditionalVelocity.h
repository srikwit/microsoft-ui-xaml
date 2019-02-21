﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "ViewChangeBase.h"

class ZoomFactorChangeWithAdditionalVelocity : public ViewChangeBase
{
public:
    ZoomFactorChangeWithAdditionalVelocity(
        float zoomFactorVelocity,
        winrt::IReference<winrt::float2> centerPoint,
        winrt::IReference<float> inertiaDecayRate);
    ~ZoomFactorChangeWithAdditionalVelocity();

private:
    float m_zoomFactorVelocity{};
    winrt::IReference<winrt::float2> m_centerPoint{};
    winrt::IReference<float> m_inertiaDecayRate{};
};

