// ================================================================================================
// 
// If not explicitly stated: Copyright (C) 2017, all rights reserved,
//      Rüdiger Göbl 
//		Email r.goebl@tum.de
//      Chair for Computer Aided Medical Procedures
//      Technische Universität München
//      Boltzmannstr. 3, 85748 Garching b. München, Germany
// 
// ================================================================================================

#ifndef __RXBEAMFORMERMV_H__
#define __RXBEAMFORMERMV_H__

#ifdef HAVE_BEAMFORMER_MINIMUM_VARIANCE

#include <memory>

#include <cublas_v2.h>

namespace supra
{
	template <typename T>
	class USRawData;
	template <typename T>
	class USImage;

	template <typename ChannelDataType, typename ImageDataType>
	std::shared_ptr<USImage<ImageDataType> > performRxBeamforming(
		std::shared_ptr<const USRawData<ChannelDataType> > rawData,
		uint32_t subArraySize,
		uint32_t temporalSmoothing,
		cublasHandle_t cublasH);
}

#endif //HAVE_BEAMFORMER_MINIMUM_VARIANCE

#endif //!__RXBEAMFORMERMV_H__
