#include <nitroWiFi.h>

SDK_WEAK_SYMBOL void CPSi_SslListen (CPSSoc * soc)
{
#pragma unused(soc)
}

SDK_WEAK_SYMBOL u32 CPSi_SslConnect (CPSSoc * soc)
{
#pragma unused(soc)
    return 0;
}

SDK_WEAK_SYMBOL u8 * CPSi_SslRead (u32 * len, CPSSoc * soc)
{
#pragma unused(len, soc)
    return NULL;
}

SDK_WEAK_SYMBOL void CPSi_SslConsume (u32 len, CPSSoc * soc)
{
#pragma unused(len, soc)
}

SDK_WEAK_SYMBOL s32 CPSi_SslGetLength (CPSSoc * soc)
{
#pragma unused(soc)
    return 0;
}

SDK_WEAK_SYMBOL u32 CPSi_SslWrite2 (u8 * buf, u32 len, u8 * buf2, u32 len2, CPSSoc * soc)
{
#pragma unused(buf, len, buf2, len2, soc)
    return 0;
}

SDK_WEAK_SYMBOL void CPSi_SslShutdown (CPSSoc * soc)
{
#pragma unused(soc)
}

SDK_WEAK_SYMBOL void CPSi_SslPeriodical (u32 now)
{
#pragma unused(now)
}

SDK_WEAK_SYMBOL void CPSi_SslCleanup (void)
{
}

SDK_WEAK_SYMBOL void CPSi_SocConsumeRaw (u32 len, CPSSoc * soc)
{
#pragma unused(len, soc)
}

SDK_WEAK_SYMBOL u32 CPSi_TcpWrite2Raw (u8 * buf, u32 len, u8 * buf2, u32 len2, CPSSoc * soc)
{
#pragma unused(buf, len, buf2, len2, soc)
    return 0;
}

SDK_WEAK_SYMBOL u32 CPSi_TcpConnectRaw (CPSSoc * soc)
{
#pragma unused(soc)
    return 0;
}

SDK_WEAK_SYMBOL void CPSi_TcpShutdownRaw (CPSSoc * soc)
{
#pragma unused(soc)
}

SDK_WEAK_SYMBOL void CPSi_TcpListenRaw (CPSSoc * soc)
{
#pragma unused(soc)
}

SDK_WEAK_SYMBOL u8 * CPSi_TcpReadRaw (u32 * len, CPSSoc * soc)
{
#pragma unused(len, soc)
    return NULL;
}
