#pragma once

namespace Poly { class Scene; }

namespace SGJ
{
	namespace CameraMovementSystem
	{
		void CameraMovementUpdatePhase(Poly::Scene* world);

		float ElasticEaseOut(float p);
	}
}