#pragma once

#include "Vector.h"
#include "AttributeInfo.h"

class EntityInfo
{
public:
	char pad_0x0000[0x8]; //0x0000
	__int32 N00000D40; //0x0008 
	__int32 N00000D89; //0x000C 
	char m_szName[32]; //0x0010 
	char pad_0x0030[0x4A8]; //0x0030
};//Size=0x08C8

class EntityHealth
{
public:
	char pad_0x0000[0xA0]; //0x0000
	__int32 m_health; //0x00A0 
	__int32 m_maxHealth; //0x00A4 
	char pad_0x00A8[0x20]; //0x00A8
};//Size=0x00C8

class Entity
{
public:
	char pad_0x0000[0x28]; //0x0000
	EntityInfo* m_pEntityInfo; //0x0028 
	char pad_0x0030[0x48]; //0x0030
	float N00000C4B; //0x0078 
	char pad_0x007C[0xC]; //0x007C
	float N00000C4D; //0x0088 
	char pad_0x008C[0xE4]; //0x008C
	float N00000C6A; //0x0170 
	char pad_0x0174[0x4]; //0x0174
	float N00000C6B; //0x0178 
	char pad_0x017C[0x64]; //0x017C
	char m_szEntityType[48]; //0x01E0 
	char pad_0x0210[0x150]; //0x0210
	char m_szPlayerName[170]; //0x0360 
	char m_szGUID[60]; //0x040A 
	char pad_0x0446[0x92]; //0x0446
	AttributeInfo* m_pAttributeInfo; //0x04D8 
	char pad_0x04E0[0x90]; //0x04E0
	EntityHealth* pHealth; //0x0570 
	char pad_0x0578[0x80]; //0x0578

};//Size=0x05F8