#include <stdio.h>

const char *logtbl[] = {
    "__process__",
    "__thread__",
    "NtDeleteFile",
    "CreateDirectoryW",
    "CreateDirectoryExW",
    "RemoveDirectoryA",
    "RemoveDirectoryW",
    "FindFirstFileExA",
    "FindFirstFileExW",
    "DeleteFileA",
    "DeleteFileW",
    "UnhookWindowsHookEx",
    "LdrGetDllHandle",
    "ExitWindowsEx",
    "IsDebuggerPresent",
    "LookupPrivilegeValueW",
    "NtClose",
    "URLDownloadToFileW",
    "InternetReadFile",
    "InternetWriteFile",
    "InternetCloseHandle",
    "DnsQuery_A",
    "DnsQuery_UTF8",
    "DnsQuery_W",
    "getaddrinfo",
    "GetAddrInfoW",
    "NtTerminateProcess",
    "ExitProcess",
    "system",
    "RegOpenKeyExA",
    "RegOpenKeyExW",
    "RegDeleteKeyA",
    "RegDeleteKeyW",
    "RegEnumKeyW",
    "RegDeleteValueA",
    "RegDeleteValueW",
    "RegCloseKey",
    "NtRenameKey",
    "NtEnumerateKey",
    "NtDeleteKey",
    "NtDeleteValueKey",
    "NtLoadKey",
    "NtSaveKey",
    "ControlService",
    "DeleteService",
    "NtDelayExecution",
    "NtDelayExecution",
    "WSAStartup",
    "gethostbyname",
    "socket",
    "connect",
    "send",
    "sendto",
    "recv",
    "recvfrom",
    "accept",
    "bind",
    "bind",
    "setsockopt",
    "listen",
    "select",
    "ioctlsocket",
    "closesocket",
    "shutdown",
    "WSARecv",
    "WSARecvFrom",
    "WSASend",
    "WSASendTo",
    "WSASocketA",
    "WSASocketW",
    "ConnectEx",
    "NtOpenMutant",
    "NtGetContextThread",
    "NtSetContextThread",
    "NtResumeThread",
    "NtTerminateThread",
    "ExitThread",
    "FindWindowA",
    "FindWindowW",
    "FindWindowExA",
    "FindWindowExA",
    "FindWindowExW",
    "FindWindowExW",
    "NtCreateFile",
    "NtOpenFile",
    "NtReadFile",
    "NtWriteFile",
    "NtDeviceIoControlFile",
    "NtQueryDirectoryFile",
    "NtQueryInformationFile",
    "NtSetInformationFile",
    "NtOpenDirectoryObject",
    "NtCreateDirectoryObject",
    "MoveFileWithProgressW",
    "CopyFileA",
    "CopyFileW",
    "CopyFileExW",
    "SetWindowsHookExA",
    "SetWindowsHookExW",
    "LdrLoadDll",
    "LdrGetProcedureAddress",
    "DeviceIoControl",
    "WriteConsoleA",
    "WriteConsoleW",
    "InternetOpenA",
    "InternetOpenW",
    "InternetConnectA",
    "InternetConnectW",
    "InternetOpenUrlA",
    "InternetOpenUrlW",
    "HttpOpenRequestA",
    "HttpOpenRequestW",
    "HttpSendRequestA",
    "HttpSendRequestW",
    "NtCreateProcess",
    "NtCreateProcessEx",
    "NtCreateUserProcess",
    "NtOpenProcess",
    "NtOpenProcess",
    "NtCreateSection",
    "NtOpenSection",
    "CreateProcessInternalW",
    "ShellExecuteExW",
    "NtAllocateVirtualMemory",
    "NtReadVirtualMemory",
    "ReadProcessMemory",
    "NtWriteVirtualMemory",
    "WriteProcessMemory",
    "NtProtectVirtualMemory",
    "VirtualProtectEx",
    "NtFreeVirtualMemory",
    "VirtualFreeEx",
    "RegCreateKeyExA",
    "RegCreateKeyExW",
    "RegEnumKeyExA",
    "RegEnumKeyExW",
    "RegEnumValueA",
    "RegEnumValueA",
    "RegEnumValueW",
    "RegEnumValueW",
    "RegSetValueExA",
    "RegSetValueExA",
    "RegSetValueExW",
    "RegSetValueExW",
    "RegQueryValueExA",
    "RegQueryValueExA",
    "RegQueryValueExW",
    "RegQueryValueExW",
    "RegQueryInfoKeyA",
    "RegQueryInfoKeyW",
    "NtCreateKey",
    "NtOpenKey",
    "NtOpenKeyEx",
    "NtReplaceKey",
    "NtEnumerateValueKey",
    "NtSetValueKey",
    "NtSetValueKey",
    "NtQueryValueKey",
    "NtQueryValueKey",
    "NtQueryMultipleValueKey",
    "NtLoadKey2",
    "NtLoadKeyEx",
    "NtQueryKey",
    "NtSaveKeyEx",
    "OpenSCManagerA",
    "OpenSCManagerW",
    "CreateServiceA",
    "CreateServiceW",
    "OpenServiceA",
    "OpenServiceW",
    "StartServiceA",
    "StartServiceW",
    "TransmitFile",
    "NtCreateMutant",
    "NtCreateNamedPipeFile",
    "NtCreateThread",
    "NtOpenThread",
    "NtSuspendThread",
    "CreateThread",
    "CreateRemoteThread",
    "RtlCreateUserThread",
    "ZwMapViewOfSection",
    "GetSystemMetrics",
    "GetCursorPos",
    "REGISTRY_OPEN_KEY",
    "REGISTRY_DELETE_KEY",
    "REGISTRY_VALUE_KEY_SET",
    "REGISTRY_VALUE_KEY_DELETE",
    "REGISTRY_KEY_RENAME",
    "REGISTRY_ENUMERATE_KEY",
    "REGISTRY_ENUMERATE_VALUE_KEY",
    "REGISTRY_QUERY_KEY",
    "REGISTRY_QUERY_VALUE_KEY",
    "REGISTRY_CREATE_KEY",
    "LOAD_DRIVER",
    "ZwOpenProcess",
    "ZwOpenThread",
    "ZwQuerySystemInformation",
    "ZwWriteVirtualMemory",
    "ZwDebugActiveProcess",
    "ZwCreateProcess",
    "ZwCreateProcessEx",
    "ZwQueueApcThread",
    "ZwCreateThread",
    "ZwCreateThreadEx",
    "NtMapViewOfSection",
    "ZwSetContextThread",
    "ZwSystemDebugControl",
    "ZwCreateFile",
    "ZwReadFile",
    "ZwWriteFile",
    "ZwDeleteFile",
    "ZwSetInformationFile (Delete)",
    "ZwSetInformationFile (Rename)",
    "ZwQueryInformationFile",
    "ZwCreateMutant",
    "ZwDeviceIoControlFile",
    "ZwTerminateProcess",
    "ZwDelayExecution",
    "ZwQueryAttributesFile",
    "ZwReadVirtualMemory",
    "ZwResumeThread",
    "ZwCreateSection",
    "ZwUserCallOneParam",
    "ZwUserCallNoParam",
    "ZwLoadDriver",
    "ZwCreateUserProcess",
    NULL
};
char logtbl_explained[sizeof(logtbl)/sizeof(char *)] = {0};
