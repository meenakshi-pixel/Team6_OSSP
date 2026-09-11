{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyO43kdhiJtUlzXW+Cja02hG"
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
      "source": [
        "%%writefile#include<stdio.h>\n",
        "#include<unistd.h>\n",
        "\n",
        "int main() {\n",
        "\tprintf(\"PID = %d\\n\", getpid());\n",
        "\treturn 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "OK8mXwPbf-Ml",
        "outputId": "774c2b2c-8b8a-417c-c984-79852d8d130f"
      },
      "execution_count": 3,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stderr",
          "text": [
            "UsageError: Cell magic `%%writefile#include<stdio.h>` not found.\n"
          ]
        }
      ]
    }
  ]
}