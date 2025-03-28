# ESP32-WROOM-32 Setup Guide

This guide provides step-by-step instructions to set up the ESP32-WROOM-32 board and run the test code . Follow these steps to install the necessary software, configure your environment, and test your board.

## Prerequisites
1. **Arduino IDE**: Download from the [Arduino website](https://www.arduino.cc/en/software).
2. **USB to UART Bridge Drivers**: For ESP32-WROOM-32, you'll need the CP210x USB to UART Bridge VCP Drivers, which can be downloaded from [Silicon Labs](https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers?tab=downloads).

---

## Step 1: Install Arduino IDE

1. Download the Arduino IDE installer from [Arduino’s website](https://www.arduino.cc/en/software).
2. Run the installer and follow the prompts to complete the installation.

---

## Step 2: Set Up ESP32 Board in Arduino IDE

1. **Open Arduino IDE**.
2. Navigate to **File > Preferences**.
3. In the **Additional Board Manager URLs** field, paste the following URL:

[https://dl.espressif.com/dl/package_esp32_index.json](https://dl.espressif.com/dl/package_esp32_index.json)

4. Go to **Tools > Board > Board Manager**.
5. Search for "ESP32 by Espressif Systems" and install the latest version.

---

## Step 3: Install USB to UART Bridge Driver

1. Visit the [Silicon Labs CP210x driver download page](https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers?tab=downloads).
2. Select the driver suitable for your operating system and install it.

---

## Step 4: Test the ESP32 Board

1. Connect your ESP32-WROOM-32 board to your computer via USB.
2. In **Arduino IDE**, go to **Tools > Board** and select **ESP32-WROOM-DA Module**.
3. Copy the code from `test_esp32.ino` 
4. Click **Upload ** (It's the arrow on the top bar of the Arduino IDE) and wait for it to finish.
5. **Open Serial Monitor**: In Arduino IDE, go to **Tools > Serial Monitor** or press Ctrl+Shift+M (Windows) / Cmd+Shift+M (Mac).

At this point, you should see on your screen something like this:

```
7008
8008
9008
10008
11008
12008
13008
14008
....(it continues till you unplug)
```







