# CONTENT SPRINT 01 - VALIDATION CHECKLIST

## A. NEW GAME / OPENING HANDOFF
- [ ] New game reaches Outskirt Stand control without hanging after the accepted intro.
- [ ] Espeon and Umbreon are already the starting party.
- [ ] No starter-choice flow exists.
- [ ] Outskirt Stand is the first real playable destination.

## B. OUTSKIRT STAND
- [ ] Willie battle triggers exactly once.
- [ ] Willie uses the intended early double-battle format.
- [ ] Phenac City unlocks immediately after the Willie clear.
- [ ] Bartender does not give Poke Balls before the Team Snagem reveal.
- [ ] Bartender gives exactly five Poke Balls once after the reveal.
- [ ] Bartender opens Poke Ball / Great Ball sales after the gift.

## C. PHENAC ARRIVAL / RUI
- [ ] First Phenac arrival automatically runs the sack encounter scene.
- [ ] Entrance battle cannot be skipped.
- [ ] Sack cannot be opened before the battle.
- [ ] Rui join happens only after the sack is untied.
- [ ] Rui remains active after save/load.

## D. MAYOR / STADIUM / SNAGEM REVEAL
- [ ] Mayor first meeting only runs once.
- [ ] Stadium check beat only runs once.
- [ ] Wakin / old-men scene only runs after the stadium check.
- [ ] Snag Machine reveal happens in-context and does not appear earlier.
- [ ] Phenac Poke Mart denies Poke Ball purchase.
- [ ] Outskirt return is the intended answer to the Poke Ball problem.

## E. MAYOR-HOUSE INVASION / FIRST SHADOW
- [ ] Return-to-Phenac urgency scene only runs after the bartender step.
- [ ] Miror B. mayor-house invasion does not fire on the first mayor visit.
- [ ] Folly rematch occurs before Trudly.
- [ ] Makuhita is bound as the Shadow target in the Trudly fight.
- [ ] Snag List updates after Makuhita.
- [ ] Saving before and after the Makuhita battle preserves the correct state.

## F. EXIT GUARDS / JOHTO SHADOW CHOICE
- [ ] Exit guards do not appear before the mayor-house invasion is resolved.
- [ ] Red = Quilava, Blue = Croconaw, Green = Bayleef.
- [ ] Clearing one guard is enough to break early Phenac lock.
- [ ] The chosen Johto Shadow is registered in the Snag List.
- [ ] Construction Lot unlock appears at slice completion.
- [ ] Pyrite Town does not unlock during this slice.
- [ ] The city does not remain falsely locked after save/load.

## G. PDA / STRATEGY MEMO
- [ ] Teacher grants Strategy Memo after Rui has joined.
- [ ] Strategy Memo remains unlocked after save/load.
- [ ] Teacher refresh script can be called later without duplicating the unlock.
- [ ] Mail page exists as part of the PDA shell but no fake CS01 story mail was authored.

## H. FAILURE CONDITIONS
This sprint fails if any of the following happen:
- [ ] Willie can be skipped and Phenac still unlocks
- [ ] Rui can join before the sack battle
- [ ] mayor-house invasion fires before the Outskirt ball trip
- [ ] Makuhita is not the first Shadow in live flow
- [ ] player can leave Phenac before the Makuhita step without the intended story logic
- [ ] Construction Lot does not unlock after the exit-guard clear
- [ ] Pyrite unlocks during CS01
- [ ] save/load wipes Rui, Shadow state, or travel unlock state
