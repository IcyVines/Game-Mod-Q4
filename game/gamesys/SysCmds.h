
#ifndef __SYS_CMDS_H__
#define __SYS_CMDS_H__

void D_DrawDebugLines( void );

void KillEntities( const idCmdArgs &args, const idTypeInfo &superClass );

void GiveStuffToPlayer( idPlayer* player, const char* name, const char* value );

//Mod
void CheckPlayerStat( idPlayer* player, const char* name );
void AddStatToPlayer( idPlayer* player, const char* name, const char* value );
void SelectPlayerClass( idPlayer* player, const char* name );
void GetClassWeapon(idPlayer* player);
//Mod End

#endif /* !__SYS_CMDS_H__ */
