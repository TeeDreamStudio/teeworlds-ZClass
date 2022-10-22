#include "infrgamecontroller.h"
#include <game/generated/protocol.h>
#include <new>
#include <engine/shared/config.h>

CInfRoleGameController::CInfRoleGameController(class CGameContext *pGameServer)
: IGameController(pGameServer)
{
	m_pGameType = "infRole";
}

void CInfRoleGameController::Tick()
{
	// this is the main part of the gamemode, this function is run every tick
	IGameController::Tick();
}
