#include <nitro.h>
#include <nitroWiFi.h>
#include <nitroWiFi/soc_stub.h>

SDK_WEAK_SYMBOL int SOC_GetAddrInfo (const char * nodeName, const char * servName, const SOCAddrInfo * hints, SOCAddrInfo ** res)
{
#pragma unused(nodeName, servName, hints, res)
    return 0;
}

SDK_WEAK_SYMBOL void SOC_FreeAddrInfo (SOCAddrInfo * head)
{
#pragma unused(head)
}

SDK_WEAK_SYMBOL int SOC_GetNameInfo (const void * sa, char * node, unsigned nodeLen, char * service, unsigned serviceLen, int flags)
{
#pragma unused(sa, node, nodeLen, service, serviceLen, flags)
    return 0;
}

SDK_WEAK_SYMBOL s32 ICMP_Cancel (ICMPInfo * info, s32 err)
{
#pragma unused(info, err)
    return 0;
}

SDK_WEAK_SYMBOL s32 ICMP_Socket (int af, ICMPInfo * info)
{
#pragma unused(af, info)
    return 0;
}

SDK_WEAK_SYMBOL s32 ICMP_Ping (ICMPInfo * info, const void * data, s32 len, const void * remote, ICMPCallback callback, s32 * result)
{
#pragma unused(info, data, len, remote, callback, result)
    return 0;
}

SDK_WEAK_SYMBOL s32 ICMP_Close (ICMPInfo * info)
{
#pragma unused(info)
    return 0;
}

SDK_WEAK_SYMBOL u16 IPi_CheckSum (IPHeader * ip)
{
#pragma unused(ip)
    return 0;
}