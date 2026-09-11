{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyNh1f8jks2D3uf2qkee7xYM"
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "code",
      "execution_count": null,
      "metadata": {
        "id": "76SpGnwreb7o"
      },
      "outputs": [],
      "source": [
        "%%writefile#include<stdio.h>\n",
        "#include<unistd.h>\n",
        "\n",
        "int main() {\n",
        "\tprintf(\"PID = %d\\n\", getpid());\n",
        "\treturn 0;\n",
        "}"
      ]
    }
  ]
}