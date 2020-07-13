#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildSeaonRankListController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildSeaonRankListController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_RankDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& need_reposition() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollViewDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_CellAssetIDForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_ConfigureCellForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDelegate_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildSeaonRankListController*))(Il2CppBase() + 0x3BE8300))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildSeaonRankListController*))(Il2CppBase() + 0x3BE83A4))(this);
	}
	template <typename T = void> T OnScrollViewDragEnd() {
		return ((T (*)(GuildSeaonRankListController*))(Il2CppBase() + 0x3BE86A0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildSeaonRankListController*))(Il2CppBase() + 0x3BE875C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildSeaonRankListController*))(Il2CppBase() + 0x3BE8828))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(GuildSeaonRankListController*))(Il2CppBase() + 0x3BE88F4))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(GuildSeaonRankListController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3BE8A6C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = uintptr_t> T GameUI_IUIFlowGridDataSource_CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(GuildSeaonRankListController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BE8CD4))(this, grid, path);
	}
	template <typename T = void> T GameUI_IUIFlowGridDataSource_ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(GuildSeaonRankListController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BE8DA0))(this, grid, cell, path);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(GuildSeaonRankListController*, uintptr_t, int32_t))(Il2CppBase() + 0x3BE9048))(this, grid, column);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(GuildSeaonRankListController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3BE9154))(this, grid, row, column);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(GuildSeaonRankListController*, uintptr_t, int32_t))(Il2CppBase() + 0x3BE9220))(this, grid, row);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(GuildSeaonRankListController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3BE92E0))(this, grid, row, column);
	}
	template <typename T = void> T GameUI_IUIFlowGridDelegate_DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(GuildSeaonRankListController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BE93D8))(this, grid, path);
	}
	template <typename T = void> T NotifyDataStoreUpdatedm__0() {
		return ((T (*)(GuildSeaonRankListController*))(Il2CppBase() + 0x3BE9494))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildSeaonRankListController*))(Il2CppBase() + 0x3BE95B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildSeaonRankListController*))(Il2CppBase() + 0x3BE95BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildSeaonRankListController*))(Il2CppBase() + 0x3BE95C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildSeaonRankListController*))(Il2CppBase() + 0x3BE95CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(GuildSeaonRankListController*))(Il2CppBase() + 0x3BE95D4))(this);
	}

};

}
