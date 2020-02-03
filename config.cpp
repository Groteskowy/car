class CfgPatches
{
    class GhunterCamo
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]={
            "DZ_Data",
            "DZ_Vehicles_Wheeled"
        };
    };
};
class CfgVehicles    //base values dont edit
{
    class Inventory_Base;
    class Container_Base;
    class WorldContainer_Base;
    class CarScript;
    class Clothing;
    class Bottle_Base;
    class OffroadHatchback;
    class HatchbackDoors_Driver;
    class HatchbackDoors_CoDriver;
    class HatchbackHood;
    class HatchbackTrunk;
    class HatchbackWheel;
    class HatchbackWheel_Ruined;
    class Hatchback_02;
    class Hatchback_02_Door_1_1;
    class Hatchback_02_Door_2_1;
    class Hatchback_02_Door_1_2;
    class Hatchback_02_Door_2_2;
    class Hatchback_02_Hood;
    class Hatchback_02_Trunk;
    class Sedan_02;
    class Sedan_02_Door_1_1;
    class Sedan_02_Door_2_1;
    class Sedan_02_Door_1_2;
    class Sedan_02_Door_2_2;
    class Sedan_02_Hood;
    class Sedan_02_Trunk;
    class CivilianSedan;
    class CivSedanDoors_Driver;
    class CivSedanDoors_CoDriver;
    class CivSedanDoors_Backleft;
    class CivSedanDoors_BackRight;
    class CivSedanHood;
    class CivSedanTrunk;
    class DamageSystem;
    class DamageZones;
    class Chassis;
    class Reflector_1_1;
    class Reflector_2_1;
    class WindowFront;
    class WindowBack;
    class Engine;
    class Roof;
    class Front;
    class Back;
    class Fender_1_1;
    class Fender_1_2;
    class Fender_2_1;
    class Fender_2_2;
    class FuelTank;
    class Health;
    class GlobalHealth;
    class Window;
    class Doors;
    class CarDoor;
	class Hatchback_Camo: Hatchback_02
	{
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"car\ghunter\GhunterCamo\hatchback_camo_body.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones: DamageZones
			{
				class Chassis: Chassis
				{
					class Health: Health
					{
					};
				};
				class Front: Front
				{
					class Health: Health
					{
					};
				};
				class Back: Back
				{
					class Health: Health
					{
					};
				};
				class Reflector_1_1: Reflector_1_1
				{
					class Health: Health
					{
					};
				};
				class Reflector_2_1: Reflector_2_1
				{
					class Health: Health
					{
					};
				};
				class WindowFront: WindowFront
				{
					class Health: Health
					{
					};
				};
				class Engine: Engine
				{
					class Health: Health
					{
					};
				};
				class FuelTank: FuelTank
				{
					class Health: Health
					{
					};
				};
				class Roof: Roof
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamo\hatchback_camo_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_1: Fender_1_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamo\hatchback_camo_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_2: Fender_1_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamo\hatchback_camo_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_1: Fender_2_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamo\hatchback_camo_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_2: Fender_2_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamo\hatchback_camo_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_body_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_Camo_Door_1_1: Hatchback_02_Door_1_1
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ghunter\GhunterCamo\hatchback_camo_frontdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamo\hatchback_camo_frontdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_frontdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_frontdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_frontdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_frontdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_frontdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_Camo_Door_2_1: Hatchback_02_Door_2_1
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ghunter\GhunterCamo\hatchback_camo_frontdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamo\hatchback_camo_frontdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_frontdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_frontdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_frontdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_frontdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_frontdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_Camo_Door_1_2: Hatchback_02_Door_1_2
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ghunter\GhunterCamo\hatchback_camo_backdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamo\hatchback_camo_backdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_backdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_backdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_backdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_backdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_backdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_Camo_Door_2_2: Hatchback_02_Door_2_2
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ghunter\GhunterCamo\hatchback_camo_backdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamo\hatchback_camo_backdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_backdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_backdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_backdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_backdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_backdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_Camo_Hood: Hatchback_02_Hood
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ghunter\GhunterCamo\hatchback_camo_hood.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					RefTexsMats[]=
					{
						"car\ghunter\GhunterCamo\hatchback_camo_hood.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"car\ghunter\GhunterCamo\hatchback_camo_hood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"car\ghunter\GhunterCamo\hatchback_camo_hood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"car\ghunter\GhunterCamo\hatchback_camo_hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"car\ghunter\GhunterCamo\hatchback_camo_hood_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"car\ghunter\GhunterCamo\hatchback_camo_hood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Hatchback_Camo_Trunk: Hatchback_02_Trunk
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ghunter\GhunterCamo\hatchback_camo_trunk.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamo\hatchback_camo_trunk.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_trunk.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_trunk.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_trunk_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_trunk_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamo\hatchback_camo_trunk_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_CamoBlack: Hatchback_02
	{
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"car\ghunter\GhunterCamoBlack\hatchback_02_body.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones: DamageZones
			{
				class Chassis: Chassis
				{
					class Health: Health
					{
					};
				};
				class Front: Front
				{
					class Health: Health
					{
					};
				};
				class Back: Back
				{
					class Health: Health
					{
					};
				};
				class Reflector_1_1: Reflector_1_1
				{
					class Health: Health
					{
					};
				};
				class Reflector_2_1: Reflector_2_1
				{
					class Health: Health
					{
					};
				};
				class WindowFront: WindowFront
				{
					class Health: Health
					{
					};
				};
				class Engine: Engine
				{
					class Health: Health
					{
					};
				};
				class FuelTank: FuelTank
				{
					class Health: Health
					{
					};
				};
				class Roof: Roof
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamoBlack\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_1: Fender_1_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamoBlack\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_2: Fender_1_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamoBlack\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_1: Fender_2_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamoBlack\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_2: Fender_2_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamoBlack\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_CamoBlack_Door_1_1: Hatchback_02_Door_1_1
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ghunter\GhunterCamoBlack\hatchback_02_frontdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamoBlack\hatchback_02_frontdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_frontdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_frontdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_frontdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_frontdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_frontdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_CamoBlack_Door_2_1: Hatchback_02_Door_2_1
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ghunter\GhunterCamoBlack\hatchback_02_frontdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamoBlack\hatchback_02_frontdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_frontdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_frontdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_frontdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_frontdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_frontdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_CamoBlack_Door_1_2: Hatchback_02_Door_1_2
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ghunter\GhunterCamoBlack\hatchback_02_backdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamoBlack\hatchback_02_backdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_backdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_backdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_backdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_backdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_backdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_CamoBlack_Door_2_2: Hatchback_02_Door_2_2
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ghunter\GhunterCamoBlack\hatchback_02_backdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamoBlack\hatchback_02_backdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_backdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_backdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_backdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_backdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_backdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_CamoBlack_Hood: Hatchback_02_Hood
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ghunter\GhunterCamoBlack\hatchback_02_hood.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					RefTexsMats[]=
					{
						"car\ghunter\GhunterCamoBlack\hatchback_02_hood.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"car\ghunter\GhunterCamoBlack\hatchback_02_hood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"car\ghunter\GhunterCamoBlack\hatchback_02_hood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"car\ghunter\GhunterCamoBlack\hatchback_02_hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"car\ghunter\GhunterCamoBlack\hatchback_02_hood_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"car\ghunter\GhunterCamoBlack\hatchback_02_hood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Hatchback_CamoBlack_Trunk: Hatchback_02_Trunk
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ghunter\GhunterCamoBlack\hatchback_02_trunk.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\GhunterCamoBlack\hatchback_02_trunk.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_trunk.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_trunk.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_trunk_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_trunk_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\GhunterCamoBlack\hatchback_02_trunk_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_FaxeTaxi: Hatchback_02
	{
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"car\ghunter\FakeTaxi\hatchback_02_body.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones: DamageZones
			{
				class Chassis: Chassis
				{
					class Health: Health
					{
					};
				};
				class Front: Front
				{
					class Health: Health
					{
					};
				};
				class Back: Back
				{
					class Health: Health
					{
					};
				};
				class Reflector_1_1: Reflector_1_1
				{
					class Health: Health
					{
					};
				};
				class Reflector_2_1: Reflector_2_1
				{
					class Health: Health
					{
					};
				};
				class WindowFront: WindowFront
				{
					class Health: Health
					{
					};
				};
				class Engine: Engine
				{
					class Health: Health
					{
					};
				};
				class FuelTank: FuelTank
				{
					class Health: Health
					{
					};
				};
				class Roof: Roof
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\FakeTaxi\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_1: Fender_1_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\FakeTaxi\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_2: Fender_1_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\FakeTaxi\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_1: Fender_2_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\FakeTaxi\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_2: Fender_2_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\FakeTaxi\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_FaxeTaxi_Door_1_1: Hatchback_02_Door_1_1
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ghunter\FakeTaxi\hatchback_02_frontdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\FakeTaxi\hatchback_02_frontdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_frontdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_frontdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_frontdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_frontdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_frontdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_FaxeTaxi_Door_2_1: Hatchback_02_Door_2_1
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ghunter\FakeTaxi\hatchback_02_frontdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\FakeTaxi\hatchback_02_frontdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_frontdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_frontdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_frontdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_frontdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_frontdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_FaxeTaxi_Door_1_2: Hatchback_02_Door_1_2
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ghunter\FakeTaxi\hatchback_02_backdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\FakeTaxi\hatchback_02_backdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_backdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_backdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_backdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_backdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_backdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_FaxeTaxi_Door_2_2: Hatchback_02_Door_2_2
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ghunter\FakeTaxi\hatchback_02_backdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\FakeTaxi\hatchback_02_backdoor.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_backdoor.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_backdoor.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_backdoor_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_backdoor_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_backdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Hatchback_FaxeTaxi_Hood: Hatchback_02_Hood
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ghunter\FakeTaxi\hatchback_02_hood.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					RefTexsMats[]=
					{
						"car\ghunter\FakeTaxi\hatchback_02_hood.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"car\ghunter\FakeTaxi\hatchback_02_hood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"car\ghunter\FakeTaxi\hatchback_02_hood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"car\ghunter\FakeTaxi\hatchback_02_hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"car\ghunter\FakeTaxi\hatchback_02_hood_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"car\ghunter\FakeTaxi\hatchback_02_hood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Hatchback_FaxeTaxi_Trunk: Hatchback_02_Trunk
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ghunter\FakeTaxi\hatchback_02_trunk.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ghunter\FakeTaxi\hatchback_02_trunk.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_trunk.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_trunk.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_trunk_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_trunk_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ghunter\FakeTaxi\hatchback_02_trunk_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Ada_Camo: OffroadHatchback
	{
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"car\ada\Camo\niva_body.rvmat",
			"car\ada\Camo\niva_body.rvmat",
			"car\ada\Camo\niva_body.rvmat",
			"car\ada\Camo\niva_body.rvmat",
			"car\ada\Camo\niva_body.rvmat",
			"car\ada\Camo\niva_body.rvmat",
			"car\ada\Camo\niva_body.rvmat",
			"car\ada\Camo\niva_body.rvmat",
			"car\ada\Camo\niva_body.rvmat",
			"car\ada\Camo\niva_body.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones: DamageZones
			{
				class Chassis: Chassis
				{
					class Health: Health
					{
					};
				};
				class Front: Front
				{
					class Health: Health
					{
					};
				};
				class Back: Back
				{
					class Health: Health
					{
					};
				};
				class Reflector_1_1: Reflector_1_1
				{
					class Health: Health
					{
					};
				};
				class Reflector_2_1: Reflector_2_1
				{
					class Health: Health
					{
					};
				};
				class WindowFront: WindowFront
				{
					class Health: Health
					{
					};
				};
				class Engine: Engine
				{
					class Health: Health
					{
					};
				};
				class FuelTank: FuelTank
				{
					class Health: Health
					{
					};
				};
				class Roof: Roof
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ada\Camo\niva_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ada\Camo\niva_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ada\Camo\niva_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ada\Camo\niva_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ada\Camo\niva_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ada\Camo\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_1: Fender_1_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ada\Camo\niva_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ada\Camo\niva_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ada\Camo\niva_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ada\Camo\niva_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ada\Camo\niva_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ada\Camo\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_2: Fender_1_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ada\Camo\niva_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ada\Camo\niva_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ada\Camo\niva_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ada\Camo\niva_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ada\Camo\niva_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ada\Camo\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_1: Fender_2_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ada\Camo\niva_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ada\Camo\niva_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ada\Camo\niva_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ada\Camo\niva_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ada\Camo\niva_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ada\Camo\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_2: Fender_2_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ada\Camo\niva_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ada\Camo\niva_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ada\Camo\niva_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ada\Camo\niva_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ada\Camo\niva_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ada\Camo\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Ada_Camo_Door: HatchbackDoors_Driver
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ada\Camo\niva_door.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ada\Camo\niva_door.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ada\Camo\niva_door.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ada\Camo\niva_door.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ada\Camo\niva_door_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ada\Camo\niva_door_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ada\Camo\niva_door_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Ada_Camo_DoorCo: HatchbackDoors_CoDriver
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ada\Camo\niva_door.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ada\Camo\niva_door.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ada\Camo\niva_door.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ada\Camo\niva_door.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ada\Camo\niva_door_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ada\Camo\niva_door_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ada\Camo\niva_door_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Ada_Camo_Hood: HatchbackHood
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ada\Camo\niva_hood.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					RefTexsMats[]=
					{
						"car\ada\Camo\niva_hood.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"car\ada\Camo\niva_hood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"car\ada\Camo\niva_hood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"car\ada\Camo\niva_hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"car\ada\Camo\niva_hood_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"car\ada\Camo\niva_hood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Ada_Camo_Trunk: HatchbackTrunk
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ada\Camo\niva_trunk.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ada\Camo\niva_trunk.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ada\Camo\niva_trunk.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ada\Camo\niva_trunk.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ada\Camo\niva_trunk_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ada\Camo\niva_trunk_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ada\Camo\niva_trunk_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Ada_CamoBlack: OffroadHatchback
	{
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"car\ada\CamoBlack\niva_body.rvmat",
			"car\ada\CamoBlack\niva_body.rvmat",
			"car\ada\CamoBlack\niva_body.rvmat",
			"car\ada\CamoBlack\niva_body.rvmat",
			"car\ada\CamoBlack\niva_body.rvmat",
			"car\ada\CamoBlack\niva_body.rvmat",
			"car\ada\CamoBlack\niva_body.rvmat",
			"car\ada\CamoBlack\niva_body.rvmat",
			"car\ada\CamoBlack\niva_body.rvmat",
			"car\ada\CamoBlack\niva_body.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones: DamageZones
			{
				class Chassis: Chassis
				{
					class Health: Health
					{
					};
				};
				class Front: Front
				{
					class Health: Health
					{
					};
				};
				class Back: Back
				{
					class Health: Health
					{
					};
				};
				class Reflector_1_1: Reflector_1_1
				{
					class Health: Health
					{
					};
				};
				class Reflector_2_1: Reflector_2_1
				{
					class Health: Health
					{
					};
				};
				class WindowFront: WindowFront
				{
					class Health: Health
					{
					};
				};
				class Engine: Engine
				{
					class Health: Health
					{
					};
				};
				class FuelTank: FuelTank
				{
					class Health: Health
					{
					};
				};
				class Roof: Roof
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ada\CamoBlack\niva_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ada\CamoBlack\niva_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ada\CamoBlack\niva_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ada\CamoBlack\niva_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ada\CamoBlack\niva_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ada\CamoBlack\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_1: Fender_1_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ada\CamoBlack\niva_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ada\CamoBlack\niva_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ada\CamoBlack\niva_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ada\CamoBlack\niva_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ada\CamoBlack\niva_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ada\CamoBlack\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_2: Fender_1_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ada\CamoBlack\niva_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ada\CamoBlack\niva_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ada\CamoBlack\niva_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ada\CamoBlack\niva_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ada\CamoBlack\niva_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ada\CamoBlack\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_1: Fender_2_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ada\CamoBlack\niva_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ada\CamoBlack\niva_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ada\CamoBlack\niva_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ada\CamoBlack\niva_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ada\CamoBlack\niva_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ada\CamoBlack\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_2: Fender_2_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ada\CamoBlack\niva_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ada\CamoBlack\niva_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ada\CamoBlack\niva_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ada\CamoBlack\niva_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ada\CamoBlack\niva_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ada\CamoBlack\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Ada_CamoBlack_Door: HatchbackDoors_Driver
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ada\CamoBlack\niva_door.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ada\CamoBlack\niva_door.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ada\CamoBlack\niva_door.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ada\CamoBlack\niva_door.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ada\CamoBlack\niva_door_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ada\CamoBlack\niva_door_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ada\CamoBlack\niva_door_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Ada_CamoBlack_DoorCo: HatchbackDoors_CoDriver
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ada\CamoBlack\niva_door.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ada\CamoBlack\niva_door.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ada\CamoBlack\niva_door.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ada\CamoBlack\niva_door.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ada\CamoBlack\niva_door_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ada\CamoBlack\niva_door_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ada\CamoBlack\niva_door_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Ada_CamoBlack_Hood: HatchbackHood
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ada\CamoBlack\niva_hood.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					RefTexsMats[]=
					{
						"car\ada\CamoBlack\niva_hood.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"car\ada\CamoBlack\niva_hood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"car\ada\CamoBlack\niva_hood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"car\ada\CamoBlack\niva_hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"car\ada\CamoBlack\niva_hood_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"car\ada\CamoBlack\niva_hood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Ada_CamoBlack_Trunk: HatchbackTrunk
	{
		hiddenSelectionsMaterials[]=
		{
			"car\ada\CamoBlack\niva_trunk.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\ada\CamoBlack\niva_trunk.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\ada\CamoBlack\niva_trunk.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\ada\CamoBlack\niva_trunk.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\ada\CamoBlack\niva_trunk_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\ada\CamoBlack\niva_trunk_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\ada\CamoBlack\niva_trunk_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Sedan_Policja: Sedan_02
	{
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"car\sedan\Milicja\sedan_02_body.rvmat",
			"car\sedan\Milicja\sedan_02_body.rvmat",
			"car\sedan\Milicja\sedan_02_body.rvmat",
			"car\sedan\Milicja\sedan_02_body.rvmat",
			"car\sedan\Milicja\sedan_02_body.rvmat",
			"car\sedan\Milicja\sedan_02_body.rvmat",
			"car\sedan\Milicja\sedan_02_body.rvmat",
			"car\sedan\Milicja\sedan_02_body.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones: DamageZones
			{
				class Chassis: Chassis
				{
					class Health: Health
					{
					};
				};
				class Front: Front
				{
					class Health: Health
					{
					};
				};
				class Back: Back
				{
					class Health: Health
					{
					};
				};
				class Reflector_1_1: Reflector_1_1
				{
					class Health: Health
					{
					};
				};
				class Reflector_2_1: Reflector_2_1
				{
					class Health: Health
					{
					};
				};
				class WindowFront: WindowFront
				{
					class Health: Health
					{
					};
				};
				class Engine: Engine
				{
					class Health: Health
					{
					};
				};
				class FuelTank: FuelTank
				{
					class Health: Health
					{
					};
				};
				class Roof: Roof
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Milicja\sedan_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Milicja\sedan_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Milicja\sedan_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Milicja\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Milicja\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Milicja\sedan_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_1: Fender_1_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Milicja\sedan_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Milicja\sedan_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Milicja\sedan_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Milicja\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Milicja\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Milicja\sedan_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_2: Fender_1_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Milicja\sedan_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Milicja\sedan_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Milicja\sedan_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Milicja\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Milicja\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Milicja\sedan_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_1: Fender_2_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Milicja\sedan_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Milicja\sedan_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Milicja\sedan_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Milicja\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Milicja\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Milicja\sedan_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_2: Fender_2_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Milicja\sedan_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Milicja\sedan_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Milicja\sedan_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Milicja\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Milicja\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Milicja\sedan_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Sedan_Policja_Door_1_1: Sedan_02_Door_1_1
	{
		hiddenSelectionsMaterials[]=
		{
			"car\sedan\Milicja\sedan_02_door_fore.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Milicja\sedan_02_door_fore.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Milicja\sedan_02_door_fore.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Milicja\sedan_02_door_fore.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Milicja\sedan_02_door_fore_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Milicja\sedan_02_door_fore_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Milicja\sedan_02_door_fore_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Sedan_Policja_Door_2_1: Sedan_02_Door_2_1
	{
		hiddenSelectionsMaterials[]=
		{
			"car\sedan\Milicja\sedan_02_door_fore.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Milicja\sedan_02_door_fore.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Milicja\sedan_02_door_fore.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Milicja\sedan_02_door_fore.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Milicja\sedan_02_door_fore_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Milicja\sedan_02_door_fore_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Milicja\sedan_02_door_fore_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Sedan_Policja_Door_1_2: Sedan_02_Door_1_2
	{
		hiddenSelectionsMaterials[]=
		{
			"car\sedan\Milicja\sedan_02_door_aft.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Milicja\sedan_02_door_aft.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Milicja\sedan_02_door_aft.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Milicja\sedan_02_door_aft.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Milicja\sedan_02_door_aft_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Milicja\sedan_02_door_aft_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Milicja\sedan_02_door_aft_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Sedan_Policja_Door_2_2: Sedan_02_Door_2_2
	{
		hiddenSelectionsMaterials[]=
		{
			"car\sedan\Milicja\sedan_02_door_aftr.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Milicja\sedan_02_door_aftr.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Milicja\sedan_02_door_aftr.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Milicja\sedan_02_door_aftr.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Milicja\sedan_02_door_aftr_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Milicja\sedan_02_door_aftr_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Milicja\sedan_02_door_aftr_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Sedan_Policja_Hood: Sedan_02_Hood
	{
		hiddenSelectionsMaterials[]=
		{
			"car\sedan\Milicja\sedan_02_hood.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					RefTexsMats[]=
					{
						"car\sedan\Milicja\sedan_02_hood.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"car\sedan\Milicja\sedan_02_hood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"car\sedan\Milicja\sedan_02_hood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"car\sedan\Milicja\sedan_02_hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"car\sedan\Milicja\sedan_02_hood_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"car\sedan\Milicja\sedan_02_hood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Sedan_Policja_Trunk: Sedan_02_Trunk
	{
		hiddenSelectionsMaterials[]=
		{
			"car\sedan\Milicja\sedan_02_trunk.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Milicja\sedan_02_trunk.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Milicja\sedan_02_trunk.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Milicja\sedan_02_trunk.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Milicja\sedan_02_trunk_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Milicja\sedan_02_trunk_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Milicja\sedan_02_trunk_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Sedan_Camo: Sedan_02
	{
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"car\sedan\Camo\sedan_02_body.rvmat",
			"car\sedan\Camo\sedan_02_body.rvmat",
			"car\sedan\Camo\sedan_02_body.rvmat",
			"car\sedan\Camo\sedan_02_body.rvmat",
			"car\sedan\Camo\sedan_02_body.rvmat",
			"car\sedan\Camo\sedan_02_body.rvmat",
			"car\sedan\Camo\sedan_02_body.rvmat",
			"car\sedan\Camo\sedan_02_body.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones: DamageZones
			{
				class Chassis: Chassis
				{
					class Health: Health
					{
					};
				};
				class Front: Front
				{
					class Health: Health
					{
					};
				};
				class Back: Back
				{
					class Health: Health
					{
					};
				};
				class Reflector_1_1: Reflector_1_1
				{
					class Health: Health
					{
					};
				};
				class Reflector_2_1: Reflector_2_1
				{
					class Health: Health
					{
					};
				};
				class WindowFront: WindowFront
				{
					class Health: Health
					{
					};
				};
				class Engine: Engine
				{
					class Health: Health
					{
					};
				};
				class FuelTank: FuelTank
				{
					class Health: Health
					{
					};
				};
				class Roof: Roof
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Camo\sedan_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Camo\sedan_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Camo\sedan_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Camo\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Camo\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Camo\sedan_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_1: Fender_1_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Camo\sedan_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Camo\sedan_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Camo\sedan_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Camo\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Camo\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Camo\sedan_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_2: Fender_1_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Camo\sedan_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Camo\sedan_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Camo\sedan_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Camo\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Camo\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Camo\sedan_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_1: Fender_2_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Camo\sedan_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Camo\sedan_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Camo\sedan_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Camo\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Camo\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Camo\sedan_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_2: Fender_2_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Camo\sedan_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Camo\sedan_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Camo\sedan_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Camo\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Camo\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Camo\sedan_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Sedan_Camo_Door_1_1: Sedan_02_Door_1_1
	{
		hiddenSelectionsMaterials[]=
		{
			"car\sedan\Camo\sedan_02_door_fore.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Camo\sedan_02_door_fore.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Camo\sedan_02_door_fore.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Camo\sedan_02_door_fore.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Camo\sedan_02_door_fore_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Camo\sedan_02_door_fore_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Camo\sedan_02_door_fore_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Sedan_Camo_Door_2_1: Sedan_02_Door_2_1
	{
		hiddenSelectionsMaterials[]=
		{
			"car\sedan\Camo\sedan_02_door_fore.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Camo\sedan_02_door_fore.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Camo\sedan_02_door_fore.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Camo\sedan_02_door_fore.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Camo\sedan_02_door_fore_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Camo\sedan_02_door_fore_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Camo\sedan_02_door_fore_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Sedan_Camo_Door_1_2: Sedan_02_Door_1_2
	{
		hiddenSelectionsMaterials[]=
		{
			"car\sedan\Camo\sedan_02_door_aft.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Camo\sedan_02_door_aft.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Camo\sedan_02_door_aft.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Camo\sedan_02_door_aft.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Camo\sedan_02_door_aft_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Camo\sedan_02_door_aft_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Camo\sedan_02_door_aft_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Sedan_Camo_Door_2_2: Sedan_02_Door_2_2
	{
		hiddenSelectionsMaterials[]=
		{
			"car\sedan\Camo\sedan_02_door_aft.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Camo\sedan_02_door_aft.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Camo\sedan_02_door_aft.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Camo\sedan_02_door_aft.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Camo\sedan_02_door_aft_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Camo\sedan_02_door_aft_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Camo\sedan_02_door_aft_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Sedan_Camo_Hood: Sedan_02_Hood
	{
		hiddenSelectionsMaterials[]=
		{
			"car\sedan\Camo\sedan_02_hood.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					RefTexsMats[]=
					{
						"car\sedan\Camo\sedan_02_hood.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"car\sedan\Camo\sedan_02_hood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"car\sedan\Camo\sedan_02_hood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"car\sedan\Camo\sedan_02_hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"car\sedan\Camo\sedan_02_hood_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"car\sedan\Camo\sedan_02_hood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Sedan_Camo_Trunk: Sedan_02_Trunk
	{
		hiddenSelectionsMaterials[]=
		{
			"car\sedan\Camo\sedan_02_trunk.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\Camo\sedan_02_trunk.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\Camo\sedan_02_trunk.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\Camo\sedan_02_trunk.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\Camo\sedan_02_trunk_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\Camo\sedan_02_trunk_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\Camo\sedan_02_trunk_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Sedan_CamoBlack: Sedan_02
	{
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"car\sedan\CamoBlack\sedan_02_body.rvmat",
			"car\sedan\CamoBlack\sedan_02_body.rvmat",
			"car\sedan\CamoBlack\sedan_02_body.rvmat",
			"car\sedan\CamoBlack\sedan_02_body.rvmat",
			"car\sedan\CamoBlack\sedan_02_body.rvmat",
			"car\sedan\CamoBlack\sedan_02_body.rvmat",
			"car\sedan\CamoBlack\sedan_02_body.rvmat",
			"car\sedan\CamoBlack\sedan_02_body.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones: DamageZones
			{
				class Chassis: Chassis
				{
					class Health: Health
					{
					};
				};
				class Front: Front
				{
					class Health: Health
					{
					};
				};
				class Back: Back
				{
					class Health: Health
					{
					};
				};
				class Reflector_1_1: Reflector_1_1
				{
					class Health: Health
					{
					};
				};
				class Reflector_2_1: Reflector_2_1
				{
					class Health: Health
					{
					};
				};
				class WindowFront: WindowFront
				{
					class Health: Health
					{
					};
				};
				class Engine: Engine
				{
					class Health: Health
					{
					};
				};
				class FuelTank: FuelTank
				{
					class Health: Health
					{
					};
				};
				class Roof: Roof
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\CamoBlack\sedan_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\CamoBlack\sedan_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\CamoBlack\sedan_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\CamoBlack\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\CamoBlack\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\CamoBlack\sedan_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_1: Fender_1_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\CamoBlack\sedan_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\CamoBlack\sedan_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\CamoBlack\sedan_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\CamoBlack\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\CamoBlack\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\CamoBlack\sedan_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_2: Fender_1_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\CamoBlack\sedan_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\CamoBlack\sedan_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\CamoBlack\sedan_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\CamoBlack\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\CamoBlack\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\CamoBlack\sedan_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_1: Fender_2_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\CamoBlack\sedan_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\CamoBlack\sedan_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\CamoBlack\sedan_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\CamoBlack\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\CamoBlack\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\CamoBlack\sedan_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_2: Fender_2_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\CamoBlack\sedan_02_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\CamoBlack\sedan_02_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\CamoBlack\sedan_02_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\CamoBlack\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\CamoBlack\sedan_02_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\CamoBlack\sedan_02_body_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Sedan_CamoBlack_Door_1_1: Sedan_02_Door_1_1
	{
		hiddenSelectionsMaterials[]=
		{
			"car\sedan\CamoBlack\sedan_02_door_fore.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\CamoBlack\sedan_02_door_fore.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_fore.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_fore.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_fore_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_fore_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_fore_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Sedan_CamoBlack_Door_2_1: Sedan_02_Door_2_1
	{
		hiddenSelectionsMaterials[]=
		{
			"car\sedan\CamoBlack\sedan_02_door_fore.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\CamoBlack\sedan_02_door_fore.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_fore.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_fore.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_fore_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_fore_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_fore_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Sedan_CamoBlack_Door_1_2: Sedan_02_Door_1_2
	{
		hiddenSelectionsMaterials[]=
		{
			"car\sedan\CamoBlack\sedan_02_door_aft.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\CamoBlack\sedan_02_door_aft.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_aft.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_aft.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_aft_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_aft_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_aft_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Sedan_CamoBlack_Door_2_2: Sedan_02_Door_2_2
	{
		hiddenSelectionsMaterials[]=
		{
			"car\sedan\CamoBlack\sedan_02_door_aft.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\CamoBlack\sedan_02_door_aft.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_aft.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_aft.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_aft_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_aft_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\CamoBlack\sedan_02_door_aft_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class Sedan_CamoBlack_Hood: Sedan_02_Hood
	{
		hiddenSelectionsMaterials[]=
		{
			"car\sedan\CamoBlack\sedan_02_hood.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					RefTexsMats[]=
					{
						"car\sedan\CamoBlack\sedan_02_hood.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"car\sedan\CamoBlack\sedan_02_hood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"car\sedan\CamoBlack\sedan_02_hood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"car\sedan\CamoBlack\sedan_02_hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"car\sedan\CamoBlack\sedan_02_hood_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"car\sedan\CamoBlack\sedan_02_hood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Sedan_CamoBlack_Trunk: Sedan_02_Trunk
	{
		hiddenSelectionsMaterials[]=
		{
			"car\sedan\CamoBlack\sedan_02_trunk.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"car\sedan\CamoBlack\sedan_02_trunk.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"car\sedan\CamoBlack\sedan_02_trunk.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"car\sedan\CamoBlack\sedan_02_trunk.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"car\sedan\CamoBlack\sedan_02_trunk_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"car\sedan\CamoBlack\sedan_02_trunk_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"car\sedan\CamoBlack\sedan_02_trunk_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
};	