class CfgPatches
{
	class Herbert22dev
	{
		weapons[]={};
		requiredVersion=1.18;
		requiredAddons[]=
		{
			"DZ_Data",

		};
		ammo[]=
		{
			"Bullet_22dev",
		};
	};
};

class cfgAmmoTypes
{
	class AType_Bullet_22dev
	{
		name="Bullet_22dev";
	};

};
class CfgAmmo
{
	class Bullet_Base;
	class Bullet_22;
	class Bullet_22dev: Bullet_22
	{
		scope=2;
		casing="FxCartridge_22";
		round="FxRound_22";
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.69999999,1}
			};
			class Health
			{
				damage=40;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=35;
			};
		};
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class Magazine_Base;
	class HRBRT_Ammo_22dev: Ammunition_Base
	{
		scope=2;
		displayName=".22lr Devastator rounds";
		descriptionShort=".22lr Devastator rounds. Small but very Effective. Made by Herbert Firearms Corp.";
		model="\dz\weapons\ammunition\22_LooseRounds.p3d";
		iconCartridge=1;
		weight=2;
		count=50;
		ammo="Bullet_22dev";
				hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Herbert22dev\data\22lrdev_co.paa"
		};
	};
	class Mag_MKII_10rnd: Magazine_Base
	{
		ammo="Bullet_22";
		ammoItems[]=
		{
			"Ammo_22",
			"HRBRT_Ammo_22dev"
		};
	};
	class Mag_Ruger1022_10Rnd: Magazine_Base
	{
		ammo="Bullet_22";
		ammoItems[]=
		{
			"Ammo_22",
			"HRBRT_Ammo_22dev"
		};
	};
	class Mag_Ruger1022_15Rnd: Magazine_Base
	{
		ammo="Bullet_22";
		ammoItems[]=
		{
			"Ammo_22",
			"HRBRT_Ammo_22dev"
		};
	};
	class Mag_Ruger1022_30Rnd: Magazine_Base
	{
		ammo="Bullet_22";
		ammoItems[]=
		{
			"Ammo_22",
			"HRBRT_Ammo_22dev"
		};
	};
};
class cfgWeapons
{
	class Pistol_Base;
	class Rifle_Base;
	class MKII_Base;
	class Ruger1022_Base;
	class MKII: MKII_Base
	{
		chamberableFrom[]=
		{
			"Ammo_22",
			"HRBRT_Ammo_22dev"
		};
	};
	class Ruger1022: Ruger1022_Base
	{
		chamberableFrom[]=
		{
			"Ammo_22",
			"HRBRT_Ammo_22dev"
		};
	};
	
};
class cfgVehicles
{
	class Box_Base;
	class HRBRT_AmmoBox_22dev: Box_Base
	{
		scope=2;
		displayName="Boxed .22LR Devastator rounds";
		descriptionShort="50 .22LR Devastator rounds. Small but very Effective. Made by Herbert Firearmes Corp.";
		model="DZ\weapons\ammunition\9mm_25rnd_box.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Herbert22dev\data\HRBRT_22dev_box_co.paa"
		};
		rotationFlags=12;
		lootCategory="Ammo";
		weight=45;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\ammunition\data\00buck_box.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\ammunition\data\00buck_box.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\ammunition\data\00buck_box_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\ammunition\data\00buck_box_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\ammunition\data\00buck_box_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Resources
		{
			class HRBRT_Ammo_22dev
			{
				value=50;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
};