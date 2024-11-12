# 🚀 𝕚𝟛-𝕊𝕖𝕥𝕦𝕡 🚀
   > Website: (https://i3wm.org/)

**Welcome to my custom setup!** This is my personalized Linux environment featuring:

- 🖥️ **i3 Window Manager** - For a lightweight and efficient workflow
- 🐟 **Fish Shell** - Friendly and powerful shell with [Oh My Fish](https://github.com/oh-my-fish/oh-my-fish) customization
- 💻 **URXVT Terminal** - Compiled from source for a minimalist experience

👉 For more details on Fish configuration, check out the [Gentoo Wiki: Fish](https://wiki.gentoo.org/wiki/Fish) page.

### Why I Love This Setup
- 🚀 **Resource Efficiency** - Optimized for performance and minimal resource usage.

    On average, my setup consumes between **250 MB and 400 MB of RAM**, depending on the installed packages and background services. The lightweight configuration allows me to maximize system resources for essential tasks and ensures swift operation.

    <img src="showcase/to/htop.png" alt="Memory Usage Graph" width="400">

    The graph above illustrates typical memory usage in my setup, showcasing the benefits of minimal bloat. This setup is ideal for developers and enthusiasts who value resource efficiency without compromising on functionality.

- 🎨 **Customization** - Fully tailored environment to fit my workflow
- 🛠️ **Hands-On Learning** - Building from source helps me understand Linux better


**Features**

    Lightweight and responsive window management
    Custom keybindings for quick navigation
    Aesthetic design with a focus on usability


![Preview](showcase/rice.png)

## Dependencies

**Arch Linux 🔷**

To install the necessary dependencies on Arch Linux, run:

```sudo pacman -S neofetch rxvt-unicode tint2 picom fish i3```

**Debian ❣️ - (Ubuntu 🍊 - Mint 🍏)**

For Debian-based distributions, use the following command:



```sudo apt install neofetch rxvt-unicode tint2 fish picom i3```

**Gentoo 🧼**

On Gentoo, you can install the required packages using:



```root # emerge --ask app-misc/neofetch x11-terms/rxvt-unicode x11-misc/tint2 x11-wm/i3 x11-misc/picom```

 > Fish Shell Wiki
    (https://wiki.gentoo.org/wiki/Fish)



**OpenSUSE 🦎**

For OpenSUSE distribution, use the following command:



```sudo zypper install neofetch rxvt-unicode fish tint2 picom i3```


**Instalation:**

```git clone https://github.com/user7210unix/personal-i3-Setup.git```

```cd personal-i3-Setup```
``cd dmenu``
``sudo make clean install``
``cd``
``cd config``
