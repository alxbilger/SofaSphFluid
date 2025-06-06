/******************************************************************************
*                 SOFA, Simulation Open-Framework Architecture                *
*                    (c) 2006 INRIA, USTL, UJF, CNRS, MGH                     *
*                                                                             *
* This program is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This program is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this program. If not, see <http://www.gnu.org/licenses/>.        *
*******************************************************************************
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
#define SOFA_COMPONENT_MAPPING_SPHFLUIDSURFACEMAPPING_CPP
#include <SofaSphFluid/SPHFluidSurfaceMapping.inl>

#include <sofa/core/ObjectFactory.h>


namespace sofa::component::mapping
{

using namespace sofa::defaulttype;

// Register in the Factory
void registerSPHFluidSurfaceMapping(sofa::core::ObjectFactory* factory)
{
    factory->registerObjects(sofa::core::ObjectRegistrationData("Mapping the surface of a Smooth Particle Hydrodynamics model.")
    .add< SPHFluidSurfaceMapping< Vec3Types, Vec3Types > >());
}

template class SOFA_SPH_FLUID_API SPHFluidSurfaceMapping< Vec3Types, Vec3Types >;


} // namespace sofa::component::mapping





