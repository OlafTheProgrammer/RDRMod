createdialog "GUIMissiontir";

//control_MissionTir = [(ctrlText 1400),(ctrlText 1401),(ctrlText 1403),(ctrlText 1402),MissionTirTypeEnnemi,MissionTirTypeTir,DesQuePossible,(ctrlText 1405),(ctrlText 1404)];
ctrlSetText [1400, (control_MissionTir select 0)];
ctrlSetText [1401, (control_MissionTir select 1)];
ctrlSetText [1403, (control_MissionTir select 2)];
ctrlSetText [1402, (control_MissionTir select 3)];
MissionTirTypeEnnemi = (control_MissionTir select 4);
MissionTirTypeTir = (control_MissionTir select 5);
DesQuePossible = (control_MissionTir select 6);
ctrlSetText [1405, (control_MissionTir select 7)];
ctrlSetText [1404, (control_MissionTir select 8)];

{_index = lbAdd [2100, str(_x)];} foreach MissionTir_Batterie;
lbSetCurSel [2100,control_MissionTir select 9];



MissionTir_arty = missionNamespace getVariable [(lbText [2100, (lbCurSel 2100)]), objNull]; 
ctrlSetText [1000, ((groupID group MissionTir_arty)+", ici " + (str(group player)) + ", mission de tir, à vous.")];





