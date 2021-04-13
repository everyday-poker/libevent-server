// UpGradeDLL.cpp : 定义 DLL 的初始化例程。
//

#include "ServerManage.h"

//获取游戏组件信息
extern "C"  int GetServiceInfo(ServerDllInfoStruct * pServiceInfo, UINT uVer)
{
	//效验信息
	if ((uVer!=DEV_LIB_VER)||(pServiceInfo==NULL)) return false;

	//写入信息
	memset(pServiceInfo,0,sizeof(ServerDllInfoStruct));
	pServiceInfo->uServiceVer=GAME_MAX_VER;
	pServiceInfo->uNameID=NAME_ID;
	pServiceInfo->uDeskPeople=PLAY_COUNT;
	pServiceInfo->uSupportType=SUPPER_TYPE;
	strcpy(pServiceInfo->szGameName,GAMENAME);
	///lstrcpy(pServiceInfo->szGameTable,GAME_TABLE_NAME);
	///lstrcpy(pServiceInfo->szDLLFileName,SERVER_DLL_NAME);
	strcpy(pServiceInfo->szDllNote,"牌类 -- 斗地主游戏组件");
	return true;
}

//获取游戏管理接口函数
extern "C"  IModuleManageService * CreateServiceInterface(UINT uVer)
{
	if (uVer==DEV_LIB_VER) 
	{
		try	{ return new CGameModuleTemplate<CServerGameDesk,1,10>; }
		catch (...) {}
	}
	return NULL;
}
