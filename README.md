# My Keyboard

⌨️ Some keyboards designed by myself.

[![Author](https://img.shields.io/badge/Author-HAIZAKURA-b68469?style=flat-square)](https://nya.run) [![License](https://img.shields.io/github/license/HAIZAKURA/my-keyboard?style=flat-square)](./LICENSE)

## NanoPad 16

> Under development...

## NanoPad 16 Retro

- ATMEGA328P

- RGB Lighting with WS2812

- DIP Switches

- Hot Plug Switches

- QMK Firmware [*Build by yourself*](https://github.com/HAIZAKURA/my-keyboard/tree/main/nanopad16_retro/qmk/keyboards/haizakura/nanopad16_retro)

- Vial Compatible [*See how to use*](https://get.vial.today/docs/porting-to-via.html#done)

- Retro Style

### Top

![TOP](./nanopad16_retro/hardware/top.svg)

### Bottom

![BOTTOM](./nanopad16_retro/hardware/bottom.svg)

### BOM

| Name       | LCSC PN  | Qty | Package            | Value              | Description        |
| ---------- | -------- | --- | ------------------ | ------------------ | ------------------ |
| C1         | C333838  | 1   | CAP-TH_L7.2-W2.5   | 100nF              | Capacitance        |
| C2         | C88759   | 1   | CAP-TH_BD5.0-P2.00 | 4.7uF              | Capacitance        |
| C3, C4     | C278005  | 2   | CAP-TH_L6.5-W3.5   | 22pF               | Capacitance        |
| D**        | C402212  | 16  | DO-35              | 1N4148             | Switch Diode       |
| FUSE       | C20831   | 1   | FUSE-TH_L7.8-W3.0  | 6V 1.1A            | Resettable Fuse    |
| LED1, LED2 |          | 2   | 0805               | LED                | SMD LED (opt.)     |
| MCU        | C33901   | 1   | DIP-28             | ATMEGA328P-PU      | MCU                |
| R1, R5     | C714010  | 2   | RES-TH_BD2.3-L6.5  | 5.1kΩ              | Resistor           |
| R2         | C120059  | 1   | RES-TH_BD2.3-L6.5  | 1.5kΩ              | Resistor           |
| R3, R4     | C713975  | 2   | RES-TH_BD2.3-L6.5  | 68Ω                | Resistor           |
| R6         | C410695  | 1   | RES-TH_BD2.3-L6.5  | 10kΩ               | Resistor           |
| R7         | C410696  | 1   | RES-TH_BD2.3-L6.5  | 1kΩ                | Resistor           |
| RGB**      |          | 16  | 3528               | WS2812             | RGB LED            |
| SW1, SW2   | C2888948 | 2   | SMD                | TSB001A3512A       | DIP Switch         |
| U1         | C72125   | 1   | DIP-28_L35.6-W10.2 | DS1009-28AT1NS-0A2 | IC Connector       |
| USB        | C720630  | 1   | SMD                | TYPEC-304S-ACP16   | 16 Pins USB-C      |
| U**        |          | 16  | SMD                | Kailh              | Hot Plug Connector |
| X1         | C16212   | 1   | OSC-TH_L10.0-W4.5  | 16MHz              | Crystal            |

## Author

**my-keyboard** © [HAIZAKURA](https://nya.run), Released under the [MIT](./LICENSE) License.

> [Personal Website](https://nya.run) · GitHub [@HAIZAKURA](https://github.com/HAIZAKURA) · Twitter [@haizakura_0v0](https://twitter.com/haizakura_0v0) · Telegram [@haizakura](https://t.me/haizakura)

## Thanks

**qmk_firmware** © [QMK](https://github.com/qmk), Released under the [GNU General Public License](https://github.com/qmk/qmk_firmware/blob/master/LICENSE) .

> [qmk_firmware](https://github.com/qmk/qmk_firmware)

**vial-qmk** © [Vial](https://github.com/vial-kb), Released under the [GNU General Public License](https://github.com/qmk/https://github.com/vial-kb/vial-qmk/blob/vial/LICENSE) .

> [vial-qmk](https://github.com/vial-kb/vial-qmk)

