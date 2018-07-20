#pragma once

namespace Poly
{
	class Scene;
}

namespace SGJ
{
	class PlayerControllerComponent;
	namespace PowerupSystem
	{
		void ApplyPowerupsAndInput(Poly::Scene* world, PlayerControllerComponent* player);
	}

}
