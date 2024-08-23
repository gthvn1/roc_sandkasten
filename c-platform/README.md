# Exploring Roc platform

- We are using C because after looking [platform-switch](https://github.com/roc-lang/roc/tree/main/examples/platform-switching) it looks like the most easy to build. We also add some issues with Zig version that was our initial choice.

- Step1: start with minimal platform
    - It looks like only `getppid` is required to build the platform
- Step2: Print the string passed from main.roc app

To run it: `roc run`
It will just build because we are not doing anything with the input string... it is step2 
