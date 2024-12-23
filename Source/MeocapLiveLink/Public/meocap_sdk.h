#ifndef meocap_sdk
#define meocap_sdk

#ifdef __cplusplus

extern "C"
{
#endif
#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

    typedef enum ErrorType
    {
        None = 0,
        Socket = 1,
        InvalidParameter = 2,
        DataCorrupted = 3,
    } ErrorType;

    typedef struct Status
    {
        enum ErrorType ty;
        uint64_t info;
    } Status;

    typedef struct SkelJoint
    {
        double pos[3];
    } SkelJoint;

    typedef struct SkelBase
    {
        struct SkelJoint bones[24];
        double floor_y;
    } SkelBase;

    /**
     * Send and Sync
     */
    typedef struct CSocket
    {

    } CSocket;

    typedef struct ConnectServerRet
    {
        struct Status err;
        const CSocket* socket;
    } ConnectServerRet;

    typedef struct Joint
    {
        double pos[3];
        double glb_rot[4];
        double loc_rot[4];
    } Joint;

    typedef struct Addr
    {
        uint8_t a;
        uint8_t b;
        uint8_t c;
        uint8_t d;
        uint16_t port;
    } Addr;


    typedef struct MeoFrame
    {
        int32_t frame_id;
        double translation[3];
        struct Joint joints[24];
        struct Addr src;
    } MeoFrame;


    struct Status meocap_command_set_skel(const CSocket* socket, struct Addr* addr, const struct SkelBase* skel);

    struct ConnectServerRet meocap_bind_listening_addr(struct Addr* addr);

    struct Status meocap_recv_frame(const CSocket* socket, struct MeoFrame* frame_buf);

    struct Status meocap_clean_up(const CSocket* socket);
#ifdef __cplusplus
}
#endif

#endif /* meocap_sdk */