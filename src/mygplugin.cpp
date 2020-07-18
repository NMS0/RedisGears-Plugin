#include "include/redismodule.h"
#include "include/redisgears.h"
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif



    int RedisGears_OnLoad(RedisModuleCtx *ctx) {
    if(RedisGears_InitAsGearPlugin(ctx, "mygplugin",1) != REDISMODULE_OK){
        RedisModule_Log(ctx, "warning", "Failed initialize RedisGears API");
        return REDISMODULE_ERR;
        }

    }
    

#ifdef __cplusplus
}
#endif


