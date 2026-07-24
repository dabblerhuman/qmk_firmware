keyboards/
└── company/
    └── board/
        ├── board.c
        ├── board.h
        ├── config.h
        ├── rules.mk
        ├── info.json
        ├── keymaps/
        │   ├── default/
        │   │   └── keymap.c        # Shared by rev_a and rev_b
        │   └── via/
        │       └── keymap.c
        ├── rev_a/
        │   ├── config.h
        │   └── info.json
        ├── rev_b/
        │   ├── config.h
        │   └── info.json
        └── rev_c/
            ├── config.h
            ├── info.json
            └── keymaps/
                └── default/
                    └── keymap.c    # Overrides the shared default