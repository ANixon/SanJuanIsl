#define _ARMA_

class CfgPatches 
{
    class SanJuanIsl 
	{
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.03;
        requiredAddons[] = {"A3_Data_F","A3_Roads_F","A3_Map_Data","A3_Map_Stratis"};
        version = "0.1";
        author = "ANixon and Zisb for DesolationRedux.com";
    };
};

#include "cfgVehicles.h"

class CfgWorlds
{
	class DefaultWorld
	{
		class Weather
		{
			class Overcast;
		};
		class WaterExPars;
	};
	class CAWorld: DefaultWorld
	{
		class Grid{};
		class DayLightingBrightAlmost;
		class DayLightingRainy;
		class DefaultClutter;
		class Weather: Weather
		{
			class Lighting;
			class Overcast: Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
				class Weather6;
			};
		};
	};
	class DefaultLighting;
	class SanJuanIsl: CAWorld
	{
		#include "Clutter.h"
		access = 3;
        worldId = 1;
        cutscenes[] = {};
		author = "ANixon and Zisb for DesolationRedux.com";
        description = "San Juan Islands";
        icon = "";
        worldName = "SanJuanIsl\SanJuanIsl.wrp";
        pictureMap = "SanJuanIsl\data\other\picturemap_ca.paa";
        pictureShot = "SanJuanIsl\data\other\ui_ca.paa";
        plateFormat = "PT$ - #####";
        plateLetters = "0123456789";
        mapSize = 16384;
		mapZone = 35;
		longitude = 65;
		latitude = -34;
        envTexture = "A3\data_f\env_land_ca.paa";
        newRoadsShape = "\SanJuanIsl\data\roads\roads.shp";
		class OutsideTerrain
        {
            satellite = "";
            enableTerrainSynth = 0;
            class Layers
            {
                class Layer0
                {
                    nopx = "A3\Map_Data\gdt_seabed_nopx.paa";
                    texture = "A3\Map_Data\gdt_seabed_nopx.paa";
                };
            };
            colorOutside[] = {0.227451,0.27451,0.384314,1};
        };
		class Grid: Grid 
		{
            offsetX = 0;
            offsetY = 16384;
            class Zoom1 
			{
                zoomMax = 0.05;
                format = "XY";
                formatX = "000";
                formatY = "000";
                stepX = 100;
                stepY = -100;
            };
            class Zoom2 
			{
                zoomMax = 0.5;
                format = "XY";
                formatX = "00";
                formatY = "00";
                stepX = 1000;
                stepY = -1000;
            };
            class Zoom3 
			{
                zoomMax = 1e+030;
                format = "XY";
                formatX = "0";
                formatY = "0";
                stepX = 10000;
                stepY = -10000;
            };
        };
		startTime = "7:30";
        startDate = "07/10/2016";
		startWeather = 0.55;
		startFog = 0.20;
		forecastWeather = 0.55;
		forecastFog = 0.20;
		startFogBase = 1.0;          // base altitude for fog computations (in meters)
		forecastFogBase = 1.0;
		startFogDecay = 0.005;       // decay coefficient - decay of fog with altitude
		forecastFogDecay = 0.005;
		fogBeta0Min = 0.0001;        // (macroscopic cross-section of atmospheric scatterers at base level) for fog value 0
		fogBeta0Max = 0.02;          // (macroscopic cross-section of atmospheric scatterers at base level) for fog value 1
		centerPosition[] = {8192,8192,100};
        seagullPos[] = {8192,100,8192};
        ilsPosition[] = {};
        ilsDirection[] = {};
        ilsTaxiOff[] = {};
        ilsTaxiIn[] = {};
		drawTaxiway = 0;
		dynLightMinBrightnessAmbientCoef = 0.5;
		dynLightMinBrightnessAbsolute = 0.05;
		elevationOffset = 0;
		minHillsAltitude = 80;
		maxHillsAltitude = 200;
		mapDrawingBrightnessModifier = 1.0;
		class EnvMaps
		{
			class EnvMap1
			{
				texture = "A3\Map_Stratis\data\env_land_ClearSky_ca.paa";
				overcast = 0;
			};
			class EnvMap2
			{
				texture = "A3\Map_Stratis\data\env_land_SemiCloudySky_ca.paa";
				overcast = 0.3;
			};
			class EnvMap3
			{
				texture = "A3\Map_Stratis\data\env_land_OvercastSky_ca.paa";
				overcast = 0.6;
			};
		};
		class Sounds
        {
            sounds[] = {};
        };
        class Animation
        {
            vehicles[] = {};
        };
		clutterGrid = 1.2;
		clutterDist = 165;
		noDetailDist = 85;
		fullDetailDist = 25;
		midDetailTexture = "SanJuanIsl\data\other\middle_mco2.paa";
		minTreesInForestSquare = 2;
		minRocksInRockSquare = 2;
		hazeDistCoef = 0.1;
		hazeFogCoef = 0.98;
		horizonParallaxCoef = 0.0;
		horizonFogColorationStart = "0.8f";
		skyFogColorationStart = "0.7f";
		soundMapSizeCoef = 4;
		satelliteNormalBlendStart = 10;
		satelliteNormalBlendEnd = 100;
		hazeBaseHeight = 0;
		hazeBaseBeta0 = 8e-005;
		hazeDensityDecay = 0.00036;
		horizonSunColorationIntensity = 0.001;
		aroundSunCoefMultiplier = "1.4f";
		aroundSunCoefExponent = "12f";
		skyObject = "A3\Map_Stratis\data\obloha.p3d";
		horizontObject = "A3\Map_Stratis\data\horizont.p3d";
		skyTexture = "SanJuanIsl\data\sky\sky_semicloudy_sky.paa";
		skyTextureR = "SanJuanIsl\data\sky\sky_semicloudy_lco.paa";
		terrainBlendMaxDarkenCoef = "0.0f";
		terrainBlendMaxBrightenCoef = "0.4f";
		class SimulWeather
		{
			noiseTexture = "a3\data_f\noise_raw.paa";
			numKeyframesPerDay = 48;
			windSpeedCoef = "10.0f";
			moonIrradianceCoef = "10.0f";
			fadeMaxDistanceKm = 1000.0;
			fadeMaxAltitudeKm = 15.0;
			fadeNumAltitudes = 8;
			fadeNumElevations = 8;
			fadeNumDistances = 8;
			fadeEarthTest = 1;
			autoBrightness = 0;
			autoBrightnessStrength = 0.1;
			cloudGridWidth = 64;
			cloudGridLength = 64;
			cloudGridHeight = 16;
			helperGridElevationSteps = 24;
			helperGridAzimuthSteps = 15;
			helperEffectiveEarthRadius = 1000000;
			helperCurvedEarth = 1;
			helperAdjustCurvature = 0;
			helperNumLayers = 120;
			helperMaxDistance = 160000;
			helperNearCloudFade = 0.1;
			helperChurn = 10;
			cloudWidth = 40000;
			cloudLength = 40000;
			wrapClouds = 1;
			noiseResolution = 8;
			noisePeriod = 4.0;
			opticalDensity = 0.5;
			alphaSharpness = 0.85;
			selfShadowScale = 0.905;
			mieAsymmetry = 0.5087;
			minimumLightElevationDegrees = 6.0;
			directLightCoef = 1.0;
			indirectLightCoef = 0.04;
			fogStart = 0;
			fogEnd = 50000;
			fogHeight = 2000;
			class DefaultKeyframe
			{
				rayleigh[] = {0.00749,0.01388,0.02878};
				mie[] = {0.0046,0.0046,0.0046};
				haze = 30;
				hazeBaseKm = 5.0;
				hazeScaleKm = 1.0;
				hazeEccentricity = 1;
				brightnessAdjustment = 1.0;
				cloudiness = 0.6;
				cloudBaseKm = 2.85;
				cloudHeightKm = 6.0;
				directLight = 1.0;
				indirectLight = 1.0;
				ambientLight = 0.2;
				noiseOctaves = 4.3;
				noisePersistence = 0.535;
				fractalAmplitude = 2.3;
				fractalWavelength = 240.0;
				extinction = 4.7;
				diffusivity = 0.001;
			};
			class Overcast
			{
				class Weather1: DefaultKeyframe
				{
					overcast = 0.0;
					cloudiness = 0.0;
					diffusivity = 0.001;
					seqFileKeyframe = 0;
				};
				class Weather2: DefaultKeyframe
				{
					overcast = 0.2;
					cloudiness = 0.25;
					diffusivity = 0.001;
					seqFileKeyframe = 0;
				};
				class Weather3: DefaultKeyframe
				{
					overcast = 0.4;
					cloudiness = 0.45;
					diffusivity = 0.001;
					seqFileKeyframe = 3;
				};
				class Weather4: DefaultKeyframe
				{
					overcast = 0.5;
					cloudiness = 0.46;
					diffusivity = 0.01;
					seqFileKeyframe = 4;
				};
				class Weather5: DefaultKeyframe
				{
					overcast = 0.8;
					cloudiness = 0.8;
					diffusivity = 0.01;
					extinction = 4.3;
					cloudBaseKm = 1.9;
					cloudHeightKm = 8.0;
					seqFileKeyframe = 4;
				};
				class Weather6: DefaultKeyframe
				{
					overcast = 1.0;
					cloudiness = 1.0;
					diffusivity = 0.001;
					extinction = 4.0;
					cloudBaseKm = 1.7;
					cloudHeightKm = 10.0;
					seqFileKeyframe = 4;
				};
			};
		};
		class Sea
		{
			seaTexture = "a3\data_f\seatexture_co.paa";
			seaMaterial = "#water";
			shoreMaterial = "#shore";
			shoreFoamMaterial = "#shorefoam";
			shoreWetMaterial = "#shorewet";
			WaterMapScale = 20;
			WaterGrid = 50;
			MaxTide = 0;
			MaxWave = 1.25;
			SeaWaveXScale = "2.0/50";
			SeaWaveZScale = "1.0/50";
			SeaWaveHScale = 1.0;
			SeaWaveXDuration = 5000;
			SeaWaveZDuration = 10000;
		};
		class Underwater
		{
			noWaterFog = -0.001;
			fullWaterFog = 0.001;
			deepWaterFog = 200;
			waterFogDistanceNear = 10;
			waterFogDistance = 40;
			waterColor[] = {0.04,0.16,0.22};
			deepWaterColor[] = {0.0,0.001,0.009};
			surfaceColor[] = {0.04,0.16,0.22};
			deepSurfaceColor[] = {0,0.001,0.009};
		};
		class SeaWaterShaderPars
		{
			refractionMoveCoef = 0.03;
			minWaterOpacity = 0.0;
			waterOpacityDistCoef = 0.4;
			underwaterOpacity = 0.5;
			waterOpacityFadeStart = 60;
			waterOpacityFadeLength = 120;
		};
		class WaterExPars: WaterExPars
		{
			fogDensity = 0.07;
			fogColor[] = {0.03015,0.07155,0.09045};
			fogColorExtinctionSpeed[] = {0.1814,0.0159,0.0111};
			ligtExtinctionSpeed[] = {0.1814,0.0159,0.0111};
			diffuseLigtExtinctionSpeed[] = {0.3814,0.2159,0.2111};
			fogGradientCoefs[] = {"0.35f","1.0f","1.7f"};
			fogColorLightInfluence[] = {0.8,0.2,1.0};
			shadowIntensity = "0.0f";
			ssReflectionStrength = 0.85;
			ssReflectionMaxJitter = 1.0;
			ssReflectionRippleInfluence = 0.2;
			ssReflectionEdgeFadingCoef = 10.0;
			ssReflectionDistFadingCoef = 4.0;
			refractionMinCoef = 0.03;
			refractionMaxCoef = 0.14;
			refractionMaxDist = 5.1;
			specularMaxIntensity = 100;
			specularPowerOvercast0 = 750;
			specularPowerOvercast1 = 50;
			specularNormalModifyCoef = 0.015;
			foamAroundObjectsIntensity = "0.15f";
			foamAroundObjectsFadeCoef = "8.0f";
			foamColorCoef = "2.0f";
			foamDeformationCoef = "0.02f";
			foamTextureCoef = "0.2f";
			foamTimeMoveSpeed = "0.2f";
			foamTimeMoveAmount = "0.1f";
			shoreDarkeningMaxCoef = "0.45f";
			shoreDarkeningOffset = "0.36f";
			shoreDarkeningGradient = "0.08f";
			shoreWaveTimeScale = "0.8f";
			shoreWaveShifDerivativeOffset = "-0.8f";
			shoreFoamIntensity = "0.25f";
			shoreMaxWaveHeight = "0.15f";
			shoreWetLayerReflectionIntensity = "0.55f";
		};
		class HDRNewPars
		{
			minAperture = 1e-005;
			maxAperture = 256;
			apertureRatioMax = 4;
			apertureRatioMin = 10;
			bloomImageScale = 1.0;
			bloomScale = 0.09;
			bloomExponent = 0.75;
			bloomLuminanceOffset = 0.4;
			bloomLuminanceScale = 0.15;
			bloomLuminanceExponent = 0.25;
			tonemapMethod = 1;
			tonemapShoulderStrength = 0.22;
			tonemapLinearStrength = 0.12;
			tonemapLinearAngle = 0.1;
			tonemapToeStrength = 0.2;
			tonemapToeNumerator = 0.022;
			tonemapToeDenominator = 0.2;
			tonemapLinearWhite = 11.2;
			tonemapExposureBias = 1.0;
			tonemapLinearWhiteReinhard = "2.5f";
			eyeAdaptFactorLight = 3.3;
			eyeAdaptFactorDark = 0.75;
			nvgApertureMin = 10.0;
			nvgApertureStandard = 12.5;
			nvgApertureMax = 16.5;
			nvgStandardAvgLum = 10;
			nvgLightGain = 320;
			nvgTransition = 1;
			nvgTransitionCoefOn = "40.0f";
			nvgTransitionCoefOff = "0.01f";
			nightShiftMinAperture = 0;
			nightShiftMaxAperture = 0.002;
			nightShiftMaxEffect = 0.6;
			nightShiftLuminanceScale = 600;
		};
		skyColorInfluencesFogColor = 0;
		class Subdivision
		{
			class Fractal
			{
				rougness = 5;
				maxRoad = 0.02;
				maxTrack = 0.5;
				maxSlopeFactor = 0.05;
			};
			class WhiteNoise
			{
				rougness = 2;
				maxRoad = 0.01;
				maxTrack = 0.05;
				maxSlopeFactor = 0.0025;
			};
			minY = -0.0;
			minSlope = 0.02;
		};
		class Ambient{};
		class AmbientA3
		{
			maxCost = 500;
			class Radius440_500
			{
				areaSpawnRadius = 440.0;
				areaMaxRadius = 500.0;
				spawnCircleRadius = 30.0;
				spawnInterval = 4.7;
				class Species
				{
					class Seagull
					{
						maxCircleCount = "sea * 1 - night)) + 2 * houses * sea)) * 1 - night)";
						maxWorldCount = 12;
						cost = 3;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 100;
						minAlt = -10;
					};
					class Rabbit_F
					{
						maxCircleCount = "20 * 0.1 - houses)) * 1 - sea)";
						maxWorldCount = 14;
						cost = 5;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 80;
						minAlt = -5;
					};
				};
			};
			class Radius40_60
			{
				areaSpawnRadius = 40.0;
				areaMaxRadius = 60.0;
				spawnCircleRadius = 10.0;
				spawnInterval = 1.5;
				class Species
				{
					class CatShark_F
					{
						maxCircleCount = "4 * WaterDepth interpolate [1,30,0,1]))";
						maxWorldCount = 10;
						cost = 6;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = -10;
						minAlt = -480;
					};
					class Turtle_F
					{
						maxCircleCount = "2 * waterDepth interpolate [1,16,0,1]) * 1-houses) * 1-houses)))";
						maxWorldCount = 6;
						cost = 5;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = -5;
						minAlt = -370;
					};
					class Snake_random_F
					{
						maxCircleCount = "1 - houses) * 2 * 1 - sea)) + 2 * meadow)))";
						maxWorldCount = 3;
						cost = 5;
						spawnCount = 1;
						groupSpawnRadius = 5;
						maxAlt = 40;
						minAlt = -5;
					};
					class Salema_F
					{
						maxCircleCount = "12 * WaterDepth interpolate [1,30,0,1]) + 0.07))";
						maxWorldCount = 40;
						cost = 5;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = -10;
						minAlt = -80;
					};
					class Ornate_random_F
					{
						maxCircleCount = "12 * WaterDepth interpolate [1,30,0,1]) + 0.05))";
						maxWorldCount = 30;
						cost = 5;
						spawnCount = 3;
						groupSpawnRadius = 5;
						maxAlt = -10;
						minAlt = -80;
					};
					class Mackerel_F
					{
						maxCircleCount = "8 * WaterDepth interpolate [1,30,0,1]) + 0.07))";
						maxWorldCount = 14;
						cost = 5;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = -15;
						minAlt = -580;
					};
					class Mullet_F
					{
						maxCircleCount = "8 * WaterDepth interpolate [1,30,0,1]) + 0.07))";
						maxWorldCount = 14;
						cost = 5;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = -10;
						minAlt = -380;
					};
					class Tuna_F
					{
						maxCircleCount = "8 * WaterDepth interpolate [1,30,0,1]) - 0.2))";
						maxWorldCount = 10;
						cost = 5;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = -10;
						minAlt = -80;
					};
				};
			};
			class Radius30_40
			{
				areaSpawnRadius = 30.0;
				areaMaxRadius = 40.0;
				spawnCircleRadius = 3.0;
				spawnInterval = 3.75;
				class Species
				{
					class DragonFly
					{
						maxCircleCount = "4 * 1 - night) * 1 - WaterDepth interpolate [1,30,0,1])) * sea * 1 - windy)";
						maxWorldCount = 4;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class ButterFly_random
					{
						maxCircleCount = "3 * 1 - night) * 1 - WaterDepth interpolate [1,30,0,1])) * 1 - windy)";
						maxWorldCount = 6;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
				};
			};
			class Radius15_20
			{
				areaSpawnRadius = 15.0;
				areaMaxRadius = 20.0;
				spawnCircleRadius = 2.0;
				spawnInterval = 2.85;
				class Species
				{
					class FxWindGrass1
					{
						maxCircleCount = "2 * 1 - WaterDepth interpolate [1,30,0,1])) * windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindGrass2
					{
						maxCircleCount = "2 * 1 - WaterDepth interpolate [1,30,0,1])) * windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf1
					{
						maxCircleCount = "2 * trees + 0.5) * windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf2
					{
						maxCircleCount = "2 * trees + 0.5) * windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf3
					{
						maxCircleCount = "2 * trees + 0.5) * windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindPollen1
					{
						maxCircleCount = "3 * 1 - WaterDepth interpolate [1,30,0,1]))) * windy interpolate [0.05,0.15,0,1])";
						maxWorldCount = 6;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
				};
			};
			class Radius6_10
			{
				areaSpawnRadius = 6.0;
				areaMaxRadius = 10.0;
				spawnCircleRadius = 1.0;
				spawnInterval = 0.1;
				class Species
				{
					class HoneyBee
					{
						maxCircleCount = "4 * 1 - night) * 1 - sea) * 1 - houses) * 1 - windy)";
						maxWorldCount = 8;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class HouseFly
					{
						maxCircleCount = "3 + 3 * houses)) * 1 - night) * 1 - WaterDepth interpolate [1,30,0,1])) * 1 - windy)";
						maxWorldCount = 10;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class Mosquito
					{
						maxCircleCount = "3 * 1 - WaterDepth interpolate [1,30,0,1])) * 1 - windy)";
						maxWorldCount = 2;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
				};
			};
		};
		class Names 
		{
			#include "SanJuanIsl.hpp"
		};
		loadingTexts[] = 
		{
			"WIP TERRAIN OF SAN JUAN ISLANDS."
		};
	};
	initWorld = "SanJuanIsl";
	demoWorld = "SanJuanIsl";
};
class CfgWorldList
{
	class SanJuanIsl {};
};

//class CfgLensFlare
//{
//    flarePos[] = {0.0,0.0,0.37,0.47,0.5,0.54,0.62,0.72,0.75,0.91,1.0,1.084,1.13,1.29,1.62,1.68};
//    flareSizeCam[] = {0.2,0.4,0.025,0.05,0.042,0.043,0.04,0.75,0.6,0.7,0.15,0.85,0.44,0.45,0.55,0.1};
//    flareBright[] = {1.0,0.3,0.3,0.3,0.3,0.4,0.4,0.05,0.03,0.12,0.05,0.08,0.05,0.2,0.2,1.0};
//    flareSizeEye[] = {0.04};
//    flareSizeEyeSun[] = {0.04};
//};
#include "cfgSurfaces.h"
#include "cfgMaterials.h"