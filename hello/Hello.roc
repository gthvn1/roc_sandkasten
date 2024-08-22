module
    # Only what's listed here is accessible/exposed to other modules
    [hello]

## [hello name] returns a string by prepending Hello in front of name
hello : Str -> Str
hello = \name ->
    "Hello $(name)"
