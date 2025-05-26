# cmd-parser

**cmd-parser** is a C library that provides a Linux-like command-line interface (CLI) for custom C applications. It allows developers to easily integrate an interactive CLI into their applications, enabling users to execute commands and interact with the backend logic.

## Features

- **Custom Command Registration:** Developers can register their own commands and associated callbacks.
- **Command Validation:** The library authenticates command formats and values before triggering callbacks.
- **Built-in Commands:** Supports common commands such as `show`, `debug`, `clear`, and `config`.
- **Command Negation:** Supports negation for `config` commands.
- **Contextual Help:** Pressing `?` displays a list of valid next sub-options and help strings.
- **Single Process Support:** The CLI currently supports one process at a time, communicating with the backend via callbacks.
- **Extensible:** Future versions will support IPC between the CLI and backend processes.

## Getting Started

### Prerequisites

- GCC or any standard C compiler
- Make

### Building the Library

1. Run `make` to compile the library and example application.

### Running the Example Application

1. Execute the test application:
   ```sh
   ./exe
   ```

2. Interact with the CLI using the registered commands.

## Usage
- Include the following headers in your application:

```bash
#include "libcli.h"
#include "cmdtlv.h"
```
- Link your application with the libcli.a library:

```bash
gcc your_app.c -lcli -o your_app
```

See the provided Makefile for more details.

Refer to `testapp.c` for a usage example.

## Notes
- The CLI library is designed to emulate the interactive shell found on routing devices.
- Only one CLI process is supported at a time in the current version.


## TODO
- Add validation checks for supported data types.
- Extend support for inter-process communication (IPC) between the CLI and backend.

<!-- For more detailed documentation, see the LinuxLikeCommandLineInterface.docx file included with the source code. -->


## Execution

From the root of the project run `make` command.  

This will output the executable named `exe`.  

Run the executable using the `./exe  command.  

Inside the REPL, input `.` to show the available commands.

### Example Outputs

Show Help

```bash
root@cmd-parser> $ show help
Parse Success.
Welcome to Help Wizard
========================
1. Use '/' Character after the command to enter command mode
2. Use '?' Character after the command to see possible follow up suboptions
3. Use 'do' from within the config branch to directly trigger operational commands
4. Use '.' Character after the command to see possible complete command completions
5. Built-in commands:
    a. cls - clear screen
    b. cd - jump to top of cmd tree
    c. cd.. - jump one level up of command tree
    d. config [no] console name <console name> - set/unset new console name
    e. config [no] supportsave enable - enable/disable supportsave facility
    f. debug show cmdtree - Show entire command tree
    g. show history - show history of commands triggered
    h. repeat - repeat the last command
                      Author : Bruce Migeri, Software Engineer
                      Visit : github.com/bruce-mig for more projects

root@cmd-parser> $
```

Show Available Commands

```bash
run - 'show help' cmd to learn more
root@cmd-parser> $ .
Parse Success.
ROOT show help
ROOT show history <N>
ROOT show history
ROOT show registered commands
ROOT show ip igmp configuration
ROOT show ip igmp groups vlan <vlan-id>
ROOT show ip igmp groups <group-ip> vlan <vlan-id>
ROOT show ip igmp groups <group-ip>
ROOT show ip igmp groups
ROOT debug ut <ut-enable>
ROOT debug show cmdtree
ROOT config load <file-name>
ROOT config supportsave enable
ROOT config console name <cons-name>
ROOT config router name <cons-name>
ROOT config mtrace source <source-ip> destination <destination-ip> group <group-ip>
ROOT config mtrace source <source-ip> destination <destination-ip>
ROOT config mtrace source <source-ip> group <group-ip>
ROOT config mtrace source <source-ip>
ROOT config
ROOT run term
ROOT run ut <ut-file-name> <tc-no>
ROOT repeat
ROOT cls
ROOT cd..
ROOT cd
```

Show IPv4 IGMP groups per vLAN id

```bash
root@cmd-parser> $ show ip igmp groups 37 vlan 4005
Parse Success.
cmd code = -1
tlv->leaf_type = IPV4
tlv->leaf_id   = group-ip
tlv->value     = 37

tlv->leaf_type = INT
tlv->leaf_id   = vlan-id
tlv->value     = 4005
```

Config mtrace source and destination by group id


```bash
root@cmd-parser> $ config mtrace source 192.168.0.1 destination 172.16.0.1 group 37
Parse Success.
cmd code = 3
tlv->leaf_type = IPV4
tlv->leaf_id   = source-ip
tlv->value     = 192.168.0.1

tlv->leaf_type = IPV4
tlv->leaf_id   = destination-ip
tlv->value     = 172.16.0.1

tlv->leaf_type = IPV4
tlv->leaf_id   = group-ip
tlv->value     = 37
```


<!-- Copy the main*.c files up one directory level.

```bash
# Compile main*.c files
gcc -g -c main1.c -o main1.o

# Linking with libcli to create executable
gcc -g main1.o -o main1.exe -L ./cmd-parser/ -lcli
```

The first command compiles the `main1.c`to create object file `main1.o`. `–I` option tells compiler where to find header files included in `main1.c`.  
The second command links our project with libcli library and create final executable – `main1.exe`. You can run this executable and play around the same default commands implemented. Also, use show help to get yourself familiar with the CLI. Try out `“?”, “.”, “/”` features.  -->

<!-- See the figure below. -->
<!-- ![main1](static/image.png) -->