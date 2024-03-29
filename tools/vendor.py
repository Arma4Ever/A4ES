import os

VENDOR = {
    "@ACE": {
        "blacklist": [
            "ace_advanced_fatigue",
            "ace_hearing",
            "ace_nametags",
            "ace_sandbag",
            "ace_volume",
            "ace_viewrestriction",
            "ace_headless",
            "ace_killtracker"
        ],
        "optionals": [
            os.path.join("@ace_nocrosshair", "addons", "ace_nocrosshair.pbo"),
            os.path.join("@ace_nouniformrestrictions", "addons", "ace_nouniformrestrictions.pbo"),
        ],
    },
    "@LAMBS_Danger.fsm": {},
    "@LAMBS_Suppression": {},
    "@LAMBS_Turrets": {},
    "@LAMBS_RPG": {},
    "@3den Enhanced": {},
    "@Blurry Laser": {},
    "@Ladder Tweak": {},
    "@Zeus Enhanced": {},
    "@Zeus Enhanced - ACE3 Compatibility": {},
    "@Enhanced Movement": {},
    "@Enhanced Movement Rework": {},
    "@Gruppe Adler Trenches": {},
    "@VET_Unflipping": {},
    "@BackpackOnChest - Redux": {},
    "@Breaching Charge": {},
    "@Eden Extended Objects": {},
    "@O&T Expansion Eden": {
        "blacklist": ["expEden_static_ssDM"],
    },
    "@Metis Nature": {},
    "@PLP Markers": {},
    "@Blastcore Murr Edition": {},
    "@Swim Faster": {},
    "@Hate's Hidden Cameras": {},
    "@ArmaZeusCache": {},
    "@ILBE Assault Pack - Rewrite": {},
    "@FRXA's TFAR Extra Retextured Equipment": {},
    "@ACD - Arma3 Containers And Decorations": {},
    "@Enhanced Map Ace Version": {},
    "@MS_IFF_Strobe": {},
    "@Deformer": {},
    "@Death and Hit reactions": {},
    # "@VcomAI custom": {},
    "@Snapping for Eden and Zeus": {},

    #"@L3-GPNVG18 Panoramic Night Vision": {},
    #"@Uriki's Mission Items": {},
    #"@Simple Armbands": {},
    #"@Rismarck's Static Animations": {},
    #"@ZSL Static Poses [WW2]": {},
    #"@vurtual's Car Seat & Stretcher": {},
    #"@Vurtual's Ships": {},
    #"@Modular Buildings - Laboratory": {},
    #"@PLP Containers": {},
    #"@PLP Beach Objects": {},
    #"@PLP Urban Packs- Barriers and Fences": {},
    #"@PLP Urban Packs- Private Property": {},
    #"@Extended Fortifications Mod": {},
    #"@AVON FM12 Respirator Pack": {},
    #"@PMK-1 Gas mask": {},
    #"@M40 protective mask": {},
    #"@Ragdoll Physics Plus+ v1.12": {},
    #"-JSHK_Contamination_Gear": {},
    #"-A4ES_vendor": {},
}
