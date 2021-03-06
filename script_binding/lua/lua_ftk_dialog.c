/*This file is generated by luagen.*/
#include "lua_ftk_dialog.h"
#include "lua_ftk_callbacks.h"

static void tolua_reg_types (lua_State* L)
{
	tolua_usertype(L, "FtkDialog");
}

static int lua_ftk_dialog_create(lua_State* L)
{
	tolua_Error err = {0};
	FtkDialog* retv;
	int x;
	int y;
	int width;
	int height;
	int param_ok = tolua_isnumber(L, 1, 0, &err) && tolua_isnumber(L, 2, 0, &err) && tolua_isnumber(L, 3, 0, &err) && tolua_isnumber(L, 4, 0, &err);

	return_val_if_fail(param_ok, 0);

	x = tolua_tonumber(L, 1, 0);
	y = tolua_tonumber(L, 2, 0);
	width = tolua_tonumber(L, 3, 0);
	height = tolua_tonumber(L, 4, 0);
	retv = ftk_dialog_create(x, y, width, height);
	tolua_pushusertype(L, (FtkDialog*)retv, "FtkDialog");

	return 1;
}

static int lua_ftk_dialog_create_ex(lua_State* L)
{
	tolua_Error err = {0};
	FtkDialog* retv;
	int attr;
	int x;
	int y;
	int width;
	int height;
	int param_ok = tolua_isnumber(L, 1, 0, &err) && tolua_isnumber(L, 2, 0, &err) && tolua_isnumber(L, 3, 0, &err) && tolua_isnumber(L, 4, 0, &err) && tolua_isnumber(L, 5, 0, &err);

	return_val_if_fail(param_ok, 0);

	attr = tolua_tonumber(L, 1, 0);
	x = tolua_tonumber(L, 2, 0);
	y = tolua_tonumber(L, 3, 0);
	width = tolua_tonumber(L, 4, 0);
	height = tolua_tonumber(L, 5, 0);
	retv = ftk_dialog_create_ex(attr, x, y, width, height);
	tolua_pushusertype(L, (FtkDialog*)retv, "FtkDialog");

	return 1;
}

static int lua_ftk_dialog_set_icon(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	FtkBitmap* icon;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isusertype(L, 2, "FtkBitmap", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	icon = tolua_tousertype(L, 2, 0);
	retv = ftk_dialog_set_icon(thiz, icon);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_dialog_hide_title(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_dialog_hide_title(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_dialog_run(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_dialog_run(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_dialog_quit(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_dialog_quit(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_dialog_quit_after(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	int ms;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	ms = tolua_tonumber(L, 2, 0);
	retv = ftk_dialog_quit_after(thiz, ms);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

int tolua_ftk_dialog_init(lua_State* L)
{
	tolua_open(L);
	tolua_reg_types(L);
	tolua_module(L, NULL, 0);
	tolua_beginmodule(L, NULL);
	tolua_cclass(L,"FtkDialog", "FtkDialog", "FtkWindow", NULL);
	tolua_beginmodule(L, "FtkDialog");
	tolua_function(L, "Create", lua_ftk_dialog_create);
	tolua_function(L, "CreateEx", lua_ftk_dialog_create_ex);
	tolua_function(L, "SetIcon", lua_ftk_dialog_set_icon);
	tolua_function(L, "HideTitle", lua_ftk_dialog_hide_title);
	tolua_function(L, "Run", lua_ftk_dialog_run);
	tolua_function(L, "Quit", lua_ftk_dialog_quit);
	tolua_function(L, "QuitAfter", lua_ftk_dialog_quit_after);
	tolua_endmodule(L);
	tolua_endmodule(L);


	return 1;
}
