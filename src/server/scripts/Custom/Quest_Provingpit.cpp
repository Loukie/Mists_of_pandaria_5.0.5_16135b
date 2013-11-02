/* Test Script for npc's Darkspear jailor id : 39062 and NPC Captive spitescale scout Id : 38142
*/

#include "ScriptPCH.h"

/*######
## Quest 24768: Proving Pit
######*/



class NPC_darkspearjailor : public CreatureScript
{
public:
	NPC_darkspearjailor() : CreatureScript("NPC_darkspearjailor") { }

	bool OnGossipHello(Player * player, Creature * creature) OVERRIDE
	{
		if (player->IsInCombat())
			return false;

		player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Move!", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+1);
		player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Nevermind..", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+2);
		player->PlayerTalkClass->SendGossipMenu(1, creature->GetGUID());
		return true;
	}

	bool OnGossipSelect(Player * player, Creature * creature, uint32 sender, uint32 actions) OVERRIDE
	{
		player->PlayerTalkClass->ClearMenus();
		if (sender != GOSSIP_SENDER_MAIN)
			return false;

		switch(actions)
		{
		case GOSSIP_ACTION_INFO_DEF+1:
			(CAST_AI(NPC_darkspearjailor::NPC_darkspearjailorAI, creature ->AI()))-> canMove = true;
			break;

		case GOSSIP_ACTION_INFO_DEF+2:
			player->PlayerTalkClass->SendCloseGossip();
			break;
		}
		return true;
	}

	struct NPC_darkspearjailorAI : public ScriptedAI
	{
		NPC_darkspearjailorAI(Creature * creature) : ScriptedAI(creature) {}
		
		bool canMove;
		int moveCount;

		void Reset() OVERRIDE
		{
			canMove = false;
			moveCount = 0;
			me->SetSpeed(MOVE_WALK, 1.0f, true);
		}

		void MovementInform(uint32 type, uint32 id) OVERRIDE
		{
			if (type != POINT_MOTION_TYPE)
				return;
			moveCount++;
		}

		 void UpdateAI(uint32 diff) OVERRIDE 
        {
			switch(moveCount)
			{
			case 0:
				me->GetMotionMaster()->MovePoint(1, -1165, -5518, 12);
				break;

			case 1:
				me->GetMotionMaster()->MovePoint(2, -1153, -5519, 12);
				break;
			
			}
			ScriptedAI::UpdateAI(diff);
		}
	};

	CreatureAI * GetAI(Creature * creature) const
	{
		return new NPC_darkspearjailorAI(creature);
	}
};

void AddSC_Quest_provingpit()
{
	new NPC_darkspearjailor;
}