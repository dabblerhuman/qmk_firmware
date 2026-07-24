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