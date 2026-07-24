### Direcgory structure
QMK expects revisions to be under a rev/ directory (or equivalent revision naming supported by the keyboard).
QMK expect keyboard for the same hardwware to be under keymaps


- keyboard
  - company
    - board
      - board.c
      - board.h
      - config.h
      - rules.mk
      - info.json
      
      - keymaps:
        - default:
          - keymap.c
        - via:
          - keymap.c
        - colemakdh:
          - config.h
          - rules.mk
          - info.json
          
      - rev:
        - config.h
        - rules.mk
        - info.json
        - keymaps
          - devorak: 
            - keymap.c 

                


### Not valid:

keyboards/
└── company/
    └── board/
        ├── board.c
        ├── board.h
        ├── config.h                  # Shared configuration
        ├── rules.mk                  # Shared build rules
        ├── info.json
        ├── keymaps/
        │   ├── default/
        │   │   ├── config.h          # Overrides/adds to shared config.h
        │   │   └── keymap.c
        │   └── via/
        │       ├── config.h          # Optional VIA-specific config
        │       └── keymap.c
        ├── rev_a/
        │   ├── config.h              # Revision-specific configuration
        │   └── info.json
        ├── rev_b/
        │   ├── config.h
        │   └── info.json
        └── rev_c/
            ├── config.h
            ├── rules.mk              # Optional revision-specific rules
            ├── info.json
            └── keymaps/
                └── default/
                    ├── config.h      # Revision-specific keymap config
                    └── keymap.c