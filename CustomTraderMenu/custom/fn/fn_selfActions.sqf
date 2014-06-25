/*
* Search and find
* //Database menu
* It should be around line 785 
* line number may very
*/


// Database menu
_buy = player addAction [localize "STR_EPOCH_PLAYER_289", "\z\addons\dayz_code\actions\show_dialog.sqf",(_traderMenu select 0), 999, true, false, "",""];
s_player_parts set [count s_player_parts,_buy];
	
	
/*
* Copy, Paste and replace with
* the code below
*/
	
//Database menu
_buy = player addAction ["Trader Menu","custom\traderDalog\show_CEM.sql",(_traderMenu select 0), 99, true, false, "",""];
s_player_parts set [count s_player_parts,_buy];