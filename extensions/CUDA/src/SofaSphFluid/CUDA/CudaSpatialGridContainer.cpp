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
#define SOFASPHFLUID_CUDA_CUDASPATIALGRIDCONTAINER_CPP
#include <SofaSphFluid/CUDA/CudaSpatialGridContainer.inl>
#include <sofa/component/statecontainer/MechanicalObject.inl>
#include <sofa/core/ObjectFactory.h>


namespace sofa::component::container
{

using namespace sofa::defaulttype;
using namespace sofa::gpu::cuda;
using namespace core::behavior;


int SpatialGridContainerCudaClass = core::RegisterObject("GPU support using CUDA.")
        .add< SpatialGridContainer<CudaVec3fTypes> >()
        ;

template class SOFA_SOFASPHFLUID_CUDA_API SpatialGridContainer< CudaVec3fTypes >;
template class SOFA_SOFASPHFLUID_CUDA_API SpatialGrid< SpatialGridTypes< CudaVec3fTypes > >;

#ifdef SOFA_GPU_CUDA_DOUBLE

template class SOFA_SOFASPHFLUID_CUDA_API SpatialGridContainer< CudaVec3dTypes >;
template class SOFA_SOFASPHFLUID_CUDA_API SpatialGrid< SpatialGridTypes< CudaVec3dTypes > >;

#endif // SOFA_GPU_CUDA_DOUBLE

} // namespace sofa::component::container




