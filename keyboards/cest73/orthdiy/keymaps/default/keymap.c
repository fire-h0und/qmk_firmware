#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum unicode_names {
  A,  //0 А,
  B,  //1 Б,
  V,  //2 В,
  G,  //3 Г,
  D,  //4 Д,
  DY, //5 Ђ,
  E,  //6 Е,
  ZY, //7 Ж,
  Z,  //8 З,
  I,  //9 И,
  J,  //10 Ј,
  K,  //11 К,
  L,  //12 Л,
  LY, //13 Љ,
  M,  //14 М,
  N,  //15 Н,
  NY, //16 Њ,
  O,  //17 О,
  P,  //18 П,
  R,  //19 Р,
  S,  //20 С,
  T,  //21 Т,
  TY, //22 ћ,
  U,  //23 У,
  F,  //24 Ф,
  H,  //25 Х,
  C,  //26 Ц,
  CH, //27 Ч,
  DZ, //28 Џ,
  SH, //29 Ш,

  a,  //0 а,
  b,  //1 б,
  v,  //2 в,
  g,  //3 г,
  d,  //4 д,
  dy, //5 ђ,
  e,  //6 е,
  zy, //7 ж,
  z,  //8 з,
  i,  //9 и,
  j,  //10 ј,
  k,  //11 к,
  l,  //12 л,
  ly, //13 љ,
  m,  //14 м,
  n,  //15 н,
  ny, //16 њ,
  o,  //17 о,
  p,  //18 п,
  r,  //19 р,
  s,  //20 с,
  t,  //21 т,
  ty, //22 ћ,
  u,  //23 у,
  f,  //24 ф,
  h,  //25 х,
  c,  //26 ц,
  ch, //27 ч,
  dz, //28 џ,
  sh, //29 ш,
  deg //degree sign
};

const uint32_t PROGMEM unicode_map[] = {
  [A]  = 0x410, //0 А,
  [B]  = 0x411, //1 Б,
  [V]  = 0x412, //2 В,
  [G]  = 0x413, //3 Г,
  [D]  = 0x414, //4 Д,
  [DY] = 0x402, //5 Ђ,
  [E]  = 0x415, //6 Е,
  [ZY] = 0x416, //7 Ж,
  [Z]  = 0x417, //8 З,
  [I]  = 0x418, //9 И,
  [J]  = 0x408, //10 Ј,
  [K]  = 0x41A, //11 К,
  [L]  = 0x41B, //12 Л,
  [LY] = 0x409, //13 Љ,
  [M]  = 0x41C, //14 М,
  [N]  = 0x41D, //15 Н,
  [NY] = 0x40A, //16 Њ,
  [O]  = 0x41E, //17 О,
  [P]  = 0x41F, //18 П,
  [R]  = 0x420, //19 Р,
  [S]  = 0x421, //20 С,
  [T]  = 0x422, //21 Т,
  [TY] = 0x40B, //22 ћ,
  [U]  = 0x423, //23 У,
  [F]  = 0x424, //24 Ф,
  [H]  = 0x425, //25 Х,
  [C]  = 0x426, //26 Ц,
  [CH] = 0x427, //27 Ч,
  [DZ] = 0x40F, //28 Џ,
  [SH] = 0x428, //29 Ш,

  [a]  = 0x430, //30 а,
  [b]  = 0x431, //31 б,
  [v]  = 0x432, //32 в,
  [g]  = 0x433, //33 г,
  [d]  = 0x434, //34 д,
  [dy] = 0x452, //35 ђ,
  [e]  = 0x435, //36 е,
  [zy] = 0x436, //37 ж,
  [z]  = 0x437, //38 з,
  [i]  = 0x438, //39 и,
  [j]  = 0x458, //40 ј,
  [k]  = 0x43A, //41 к,
  [l]  = 0x43B, //42 л,
  [ly] = 0x459, //43 љ,
  [m]  = 0x43C, //44 м,
  [n]  = 0x43D, //45 н,
  [ny] = 0x45A, //46 њ,
  [o]  = 0x43E, //47 о,
  [p]  = 0x43F, //48 п,
  [r]  = 0x440, //49 р,
  [s]  = 0x441, //50 с,
  [t]  = 0x442, //51 т,
  [ty] = 0x45B, //52 ћ,
  [u]  = 0x443, //53 у,
  [f]  = 0x444, //54 ф,
  [h]  = 0x445, //55 х,
  [c]  = 0x446, //56 ц,
  [ch] = 0x447, //57 ч,
  [dz] = 0x45E, //58 џ,
  [sh] = 0x448,  //59 ш,
  [deg] = 0x00B0 // degree sign

};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * |  Tab |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * |  Esc |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * |lShift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Return|
 * ├──────┼──────┼──────┼──────┼──────┼──────┴──────┼──────┼──────┼──────┼──────┼──────┤
 * | lCtrl| lGUI | lAlt | Menu | LOWER|    Space    | RAISE| Left | Down |  Up  | Right|
 * └──────┴──────┴──────┴──────┴──────┴─────────────┴──────┴──────┴──────┴──────┴──────┘
 */
[0] = LAYOUT_all(
  KC_TAB,        KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  KC_ESC,        KC_A,    KC_S,    KC_D,     KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  OSM(MOD_LSFT), KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_SFTENT,
  KC_LCTL,       KC_LGUI, KC_LALT, KC_APP,   LT(2,KC_SPC), KC_SPC, LT(1,KC_SPC),  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

/* Raise
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Ins  |
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * | Del  |BrigUp| Vol+ | PrtSc| ScLck| Pause|   /  |  P4  |  P5  |  P6  |  P-  |U(DEG)|
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * |rShift|BrigDn| Vol- |PlUsr1|PlUsr2|StopRc|   *  |  P1  |  P2  |  P3  |  P+  |PEnter|
 * ├──────┼──────┼──────┼──────┼──────┼──────┴──────┼──────┼──────┼──────┼──────┼──────┤
 * |rCtrl | rGUI | rAlt | ---- |ADJUST| Mplay/Pause | _\/_ |  P0  |  P.  |  P,  | Mute |
 * └──────┴──────┴──────┴──────┴──────┴─────────────┴──────┴──────┴──────┴──────┴──────┘
 */
[1] = LAYOUT_all(
  KC_GRV,        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_INS,
  KC_DEL,        KC_BRIU, KC_VOLU, KC_PSCR, KC_SLCK, KC_PAUS, KC_PSLS, KC_P4,   KC_P5,   KC_P6,   KC_PMNS, X(deg),
  OSM(MOD_RSFT), KC_BRID, KC_VOLD, DM_PLY1, DM_PLY2, DM_RSTP, KC_PAST, KC_P1,   KC_P2,   KC_P3,   KC_PPLS, KC_PENT,
  KC_RCTL,       KC_RGUI, KC_ALGR, XXXXXXX, MO(3),       KC_MPLY,      _______, KC_P0,   KC_PDOT, KC_PCMM, KC_MUTE
),

/* Lower
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * | Del  |  <M  |  vM  |  ^M  |  >M  |  BM1 |  BM2 |MsAcc0|MsAcc1|MsAcc2|   -  |  =   |
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * |lShift|  <W  |  vW  |  ^W  |  >W  |  BM3 |  BM4 |   #  |   [  |   ]  |   \  |Return|
 * ├──────┼──────┼──────┼──────┼──────┼──────┴──────┼──────┼──────┼──────┼──────┼──────┤
 * | XXXX |SupOff| lAlt | SysRq| _\/_ | MPlay/Pause |ADJUST| Home | PgDn | PgUp |  End |
 * └──────┴──────┴──────┴──────┴──────┴─────────────┴──────┴──────┴──────┴──────┴──────┘
 */
[2] = LAYOUT_all(
  KC_F1,         KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  KC_DEL,        KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN1, KC_BTN2, KC_ACL0, KC_ACL1, KC_ACL2, KC_MINS, KC_EQL,
  OSM(MOD_LSFT), KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_BTN3, KC_BTN4, KC_NUHS, KC_LBRC, KC_RBRC, KC_BSLS, KC_SFTENT,
  DF(4) ,        GUI_OFF, _______, KC_SYSREQ, _______,       KC_MPLY,    MO(3), KC_HOME, KC_PGDN, KC_PGUP, KC_END
),

/* Adjust TODO
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | Power| Sleep| Wake |Screen|
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────|
 * |Reset | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────|
 * |OS_TOG| ---- | ---- |RcUsr1|RcUsr2| ---- | ---- | ---- | ---- | ---- | ---- | ---- |
 * ├──────┼──────┼──────┼──────┼──────┼──────┴──────┼──────┼──────┼──────┼──────┼──────|
 * | ---- | SupOn| ---- | ---- | ____ |             | ____ |  <<  | ---- | ---- |  >>  |
 * └──────┴──────┴──────┴──────┴──────┴─────────────┴──────┴──────┴──────┴──────┴──────┘
 */
[3] = LAYOUT_all(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PWR , KC_SLEP, KC_WAKE, KC_EXEC,
  RESET,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ACL0, KC_ACL1, KC_ACL2,
  OS_TOGG, XXXXXXX, XXXXXXX, DM_REC1, DM_REC2, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX,  GUI_ON, XXXXXXX, XXXXXXX, _______,     _______,      _______, KC_MRWD, XXXXXXX, XXXXXXX, KC_MFFD
),

/* ЋИРИЛИЦА
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * |  Tab |   Љ  |   Њ  |   Е  |   Р  |   Т  |   Ж  |   У  |   И  |   О  |   П  | Bksp |
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * |  Esc |   А  |   С  |   Д  |   Ф  |   Г  |   Х  |   Ј  |   К  |   Л  |   Ч  |  Ћ   |
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * |lShift|   З  |   Џ  |   Ц  |   В  |   Б  |   Н  |   М  |   Ш  |   Ђ  |   /  |Return|
 * ├──────┼──────┼──────┼──────┼──────┼──────┴──────┼──────┼──────┼──────┼──────┼──────┤
 * | lCtrl| lGUI | lAlt | Menu | LOWER|    Space    | RAISE| Left | Down |  Up  | Right|
 * └──────┴──────┴──────┴──────┴──────┴─────────────┴──────┴──────┴──────┴──────┴──────┘
 */
[4] = LAYOUT_all(
  KC_TAB,        XP(ly,LY), XP(ny,NY), XP( e, E), XP( r, R), XP( t, T), XP(zy,ZY), XP( u, U), XP( i, I), XP( o, O), XP( p, P), KC_BSPC,
  KC_ESC,        XP( a, A), XP( s, S), XP( d, D), XP( f, F), XP( g, G), XP( h, H), XP( j, J), XP( k, K), XP( l, L), XP(ch,CH), XP(ty,TY),
  OSM(MOD_LSFT), XP( z, Z), XP(dz,DZ), XP( c, C), XP( v, V), XP( b, B), XP( n, N), XP( m, M), XP(sh,SH), XP(dy,DY), KC_SLSH,   KC_SFTENT,
  DF(0),         KC_LGUI,   KC_LALT,   KC_APP,    LT(2,KC_SPC),     KC_SPC,     LT(1,KC_SPC), KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT
),

};
