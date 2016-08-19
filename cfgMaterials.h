class CfgMaterials
{
	class Water
	{
		PixelShaderID = "Water";
		VertexShaderID = "Water";
		ambient[] = {0.0,0.025,0.05,0.5};
		diffuse[] = {0.0,0.05,0.04,1.0};
		forcedDiffuse[] = {0.0,0.0,0.0,1};
		specular[] = {0.12,0.12,0.12,1};
		specularPower = 100;
		emmisive[] = {0,0,0,0};
		class Stage1
		{
			texture = "A3\Map_data\water_nofhq.paa";
			uvSource = "texWaterAnim";
			class uvTransform
			{
				aside[] = {0,1,0};
				up[] = {1,0,0};
				dir[] = {0,0,1};
				pos[] = {0.3,0.4,0};
			};
		};
		class Stage2
		{
			texture = "A3\data_f\sea_foam_lco.paa";
			uvSource = "none";
		};
		class Stage3
		{
			texture = "A3\Map_data\water2_nohq.paa";
			uvSource = "none";
		};
	};
	class Shore
	{
		PixelShaderID = "Shore";
		VertexShaderID = "Shore";
		ambient[] = {1.0,1.0,1.0,1.0};
		diffuse[] = {0.7,0.7,0.7,1.0};
		forcedDiffuse[] = {0.0,0.0,0.0,1};
		specular[] = {0.12,0.12,0.12,1};
		specularPower = 65;
		emmisive[] = {0,0,0,0};
		class TexGen0
		{
			uvSource = "none";
		};
		class TexGen1
		{
			uvSource = "texWaterAnim";
			class uvTransform
			{
				aside[] = {0,5,0};
				up[] = {5,0,0};
				dir[] = {0,0,1};
				pos[] = {0.3,0.4,0};
			};
		};
		class Stage1
		{
			texture = "A3\data_f\water_nofhq.paa";
			texGen = 1;
		};
		class Stage2
		{
			texture = "A3\data_f\sea_foam_lco.paa";
			texGen = 0;
		};
		class Stage3
		{
			texture = "A3\data_f\water2_nohq.paa";
			texGen = 0;
		};
		class Stage6
		{
			texture = "A3\data_f\shoreFoam_edge.paa";
			texGen = 0;
		};
		class Stage7
		{
			texture = "A3\data_f\shoreWetNormal_nohq.paa";
			texGen = 0;
		};
		class Stage8
		{
			texture = "A3\Data_F\env_land_CO.tga";
			useWorldEnvMap = 1;
			texGen = 0;
		};
	};
	class ShoreWet
	{
		PixelShaderID = "ShoreWet";
		VertexShaderID = "Shore";
		ambient[] = {1.0,1.0,1.0,1.0};
		diffuse[] = {1.0,1.0,1.0,1.0};
		forcedDiffuse[] = {0.0,0.0,0.0,0.0};
		emmisive[] = {0.0,0.0,0.0,1.0};
		specular[] = {0.1,0.1,0.1,1.0};
		specularPower = 1.0;
		class Stage0
		{
			texture = "A3\data_f\shoreWetNormal_nohq.paa";
			uvSource = "none";
		};
		class Stage1
		{
			texture = "#(ai,64,128,1)fresnel(1.4,0.1)";
			uvSource = "none";
		};
		class Stage2
		{
			useWorldEnvMap = 1;
			texture = "A3\Data_F\env_land_CO.tga";
			uvSource = "none";
		};
	};
};
