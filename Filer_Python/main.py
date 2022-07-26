from os import *
from sys import *


def main():
    if len(argv) == 1:
        now_str = "/Users/Alan"
    else:
        now_str = argv[1]
    print("Welcome to use Filer,the command line Finder!")
    print("To help,type \"help\".")
    print("Now path is {}.".format(now_str))
    system("cd " + now_str + ";ls")
    while True:
        _input = input("Command:")
        command_list = _input.split(" ")
        if command_list[0] == "quit":
            return
        elif command_list[0] == "run":
            system(now_str + " " + command_list[1])
        elif command_list[0] == "open":
            system("open " + now_str + "/" + command_list[1])
        elif command_list[0] == "remove":
            system("rm " + now_str + "/" + command_list[1])
        elif command_list[0] == "getroot":
            system("sudo -S chmod 777 {}".format(now_str))
        elif command_list[0] == "cd":
            if system("cd " + now_str) == 0:
                now_str = now_str + "/" + command_list[1]
                system("cd " + now_str+";ls")
            else:
                print("Error paths.")
        elif command_list[0] == "rmall":
            system("rm -rf " + now_str + ";ls")
        elif command_list[0] == "list":
            system("cd " + now_str + ";ls")
        elif command_list[0] == "nowpaths":
            print("Now path is {}.".format(now_str))
        else:
            print("Error command.Try again.")


main()
