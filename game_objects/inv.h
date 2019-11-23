#pragma once
#include "types.h"

struct __declspec(align(4)) T_INVENTORY;
struct __declspec(align(4)) CLASS_INVENTORY;
struct __declspec(align(4)) T_INVENTORY_ITEM;
struct __declspec(align(4)) T_INVENTORY_ITEM
{
  _BYTE gap0[6];
  _WORD hotkey_ind_assiged;
  _BYTE gap1[2];
  _BYTE byteA;
  _BYTE *id;
};
struct __declspec(align(4)) CLASS_INVENTORY
{
  _BYTE gap0[136];
  int (__thiscall *get_inventory_index_by_coords)(T_INVENTORY *, int, int);
  _BYTE gap1[20];
  T_INVENTORY_ITEM *(__thiscall *put_on_inventory_item)(T_INVENTORY *, int, signed int);
};

struct __declspec(align(4)) T_INVENTORY
{
  CLASS_INVENTORY *clazz;
  _BYTE gap0[128];
  _DWORD *item_list;
  _DWORD *dword88;
  _DWORD dword8C;
  _DWORD *pdword90;
};