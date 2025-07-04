#!/bin/bash
set -e

# === CONFIGURATION ===
VERILATOR_VERSION="v5.036"
INSTALL_PREFIX="/usr/local"  # Change to $HOME/verilator if you want a local install
SOURCE_DIR="$HOME/verilator"
NUM_CORES=$(nproc)

# === CHECK IF VERILATOR IS INSTALLED ===
if command -v verilator &> /dev/null; then
    echo "Verilator is already installed at: $(which verilator)"
    echo "Removing existing Verilator..."

    # Remove manually installed verilator if in /usr/local/bin
    if [[ -f "$INSTALL_PREFIX/bin/verilator" ]]; then
        sudo rm -f "$INSTALL_PREFIX/bin/verilator"
    fi
fi

# === BUILD & INSTALL ===
echo "Bootstrapping and building Verilator..."
autoconf
./configure --prefix="$INSTALL_PREFIX"
make -j"$NUM_CORES"

echo "Installing Verilator to $INSTALL_PREFIX..."
sudo make install

echo "✅ Verilator $VERILATOR_VERSION installed successfully."
verilator --version
