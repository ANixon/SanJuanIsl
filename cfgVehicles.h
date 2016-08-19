class CfgVehicles {
    class All;
    class AllVehicles: All {};
    class Land: AllVehicles {};
    class LandVehicle: Land {};

    class car: LandVehicle {
        rightDustEffects[] = {
            {"gras1","RDustEffects"},
            {"gras1","RGrassDryEffects"},
            {"gras1","RDirtEffects"},
            {"beach","RDustEffects"},
            {"beach","RDirtEffects"},
            {"beach","RStonesEffects"}
        };
        leftDustEffects[] = {
            {"gras1","LDustEffects"},
            {"gras1","LGrassDryEffects"},
            {"gras1","LDirtEffects"},
            {"beach","LDustEffects"},
            {"beach","LDirtEffects"},
            {"beach","LStonesEffects"}
        };
    };
    class tank: LandVehicle {
        rightDustEffects[] = {
            {"gras1","RDustEffects"},
            {"gras1","RDirtEffectsBig"},
			{"gras1","RStonesEffectsBig"},
            {"gras1","RGrassEffectsDryBig"},
            {"beach","RDustEffects"},
            {"beach","RDirtEffectsBig"},
            {"beach","RStonesEffectsBig"}
        };
        leftDustEffects[] = {
            {"gras1","LDustEffects"},
            {"gras1","LDirtEffectsBig"},
            {"gras1","LStonesEffectsBig"},
            {"gras1","LGrassEffectsDryBig"},
            {"beach","LDustEffects"},
            {"beach","LDirtEffectsBig"},
            {"beach","LStonesEffectsBig"}
        };
    };
    class Air: AllVehicles {
        rightDustEffects[] = {
            {"gras1","RDustEffectsAir"},
            {"gras1","RGrassDryEffects"},
            {"gras1","RDirtEffects"},
            {"beach","RDustEffectsAir"},
            {"beach","RSandEffects"},
            {"beach","RDirtEffects"},
            {"beach","RStonesEffects"}
        };
        leftDustEffects[] = {
            {"gras1","LDustEffectsAir"},
            {"gras1","LGrassDryEffects"},
            {"gras1","LDirtEffects"},
            {"beach","LDustEffectsAir"},
            {"beach","LSandEffects"},
            {"beach","LDirtEffects"},
            {"beach","LStonesEffects"}
        };
    };
    class Man: Land {
        rightDustEffects[] = {
            {"gras1","RDustEffectsMan"},
            {"beach","RDustEffectsMan"}
        };
        leftDustEffects[] = {
            {"gras1","LDustEffectsMan"},
            {"beach","LDustEffectsMan"}
        };
    };
};