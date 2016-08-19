class CfgSurfaces 
{
	class Default{};
	class GdtDirt;
	class GdtSoil;
	class GdtGrassDry;
	class GdtGrassGreen;
	class GdtDesert;
	class GdtConcrete;
	
    class beach: GdtDesert 
	{
        files = "sji_beach_*";
		friction = 0.9;
        rough = 0.11;
        dust = 0.90;
        maxSpeedCoef = 0.85;
		maxClutterColoringCoef = 1.5;
        soundEnviron = "dirt";
        character = "beachClutter";
        soundHit = "soft_ground";
    };
    class gras1: GdtGrassGreen 
	{
        files = "sji_gras1_*";
		friction = 0.9;
        rough = 0.11;
        dust = 0.75;
        maxSpeedCoef = 0.9;
		maxClutterColoringCoef = 1.2;
		grassCover = 0.05;
        soundEnviron = "grass";
        character = "gras1Clutter";
        soundHit = "soft_ground";
    };
    class cliff: GdtConcrete 
	{
        files = "sji_cliff_*";
		friction = 0.9;
        rough = 0.11;
        dust = 0.30;
        maxSpeedCoef = 0.75;
		maxClutterColoringCoef = 1.5;
        soundEnviron = "rock";
        character = "Empty";
        soundHit = "hard_ground";
    };
	class coastalrock: GdtConcrete 
	{
        files = "sji_coastalrock_*";
		friction = 0.9;
        rough = 0.11;
        dust = 0.30;
        maxSpeedCoef = 0.75;
		maxClutterColoringCoef = 1.5;
        soundEnviron = "rock";
        character = "Empty";
        soundHit = "hard_ground";
    };
	class coldcliff: GdtConcrete 
	{
        files = "sji_coldcliff_*";
		friction = 0.9;
        rough = 0.11;
        dust = 0.30;
        maxSpeedCoef = 0.75;
		maxClutterColoringCoef = 1.5;
        soundEnviron = "rock";
        character = "Empty";
        soundHit = "hard_ground";
    };
	class forest: GdtConcrete 
	{
        files = "sji_forest_*";
		friction = 0.9;
        rough = 0.11;
        dust = 0.30;
        maxSpeedCoef = 0.75;
		maxClutterColoringCoef = 1.5;
        soundEnviron = "rock";
        character = "forestClutter";
        soundHit = "hard_ground";
    };
	class seabed: GdtConcrete 
	{
        files = "sji_seabed_*";
		friction = 0.9;
        rough = 0.11;
        dust = 0.20;
        maxSpeedCoef = 0.70;
		maxClutterColoringCoef = 1.5;
        SoundEnviron = "dirt";
        character = "Empty";
        soundHit = "soft_ground";
    };
	class snow: GdtConcrete 
	{
        files = "sji_snow_*";
		friction = 0.9;
        rough = 0.11;
        dust = 0.20;
        maxSpeedCoef = 0.70;
		maxClutterColoringCoef = 1.0;
        SoundEnviron = "dirt";
        character = "Empty";
        soundHit = "soft_ground";
    };
};
class CfgSurfaceCharacters 
{
    class gras1Clutter 
	{
        probability[] = {0.55,0.10,0.015,0.01,0.01};
        names[] = {"GrassGreen","GrassTall","GrassDry","StrWeedBrownTallGroup","StrWeedGreenTall"};
    };
	class beachClutter 
	{
        probability[] = {0.04,0.002};
        names[] = {"ThistleHighDead","StrBigFallenBranches_pine"};
    };
	class forestClutter 
	{
        probability[] = {0.1,0.1,0.2,0.2,0.003,0.008,0.004,0.05,0.07};
        names[] = {"GrassCrookedForestca","FernAutumnca","FernAutumnTallca","RaspBerryca","MushroomsHorcakca","MushroomsBabkaca","MushroomsMuchomurkaca","GrassDryLongca","SmallPiceaca"};
    };
};