# Instrucciones para usar el proyecto Bootcamp Huertics - sesion 1 

Este proyecto utiliza FreeRTOS para parpadear un LED conectado al GPIO 2 de una ESP32. A continuación se detallan los pasos para compilar y ejecutar el código.

## Requisitos previos

1. **Instalar el entorno de desarrollo de ESP-IDF**: Asegúrate de tener instalado el ESP-IDF en tu máquina. Puedes seguir las instrucciones en la [documentación oficial de ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/index.html).

2. **Conectar la ESP32**: Conecta tu ESP32 a tu computadora mediante un cable USB.

## Compilación y carga

1. **Clonar el repositorio**: Si aún no lo has hecho, clona el repositorio donde se encuentra este proyecto.

   ```bash
   git clone <URL_DEL_REPOSITORIO>
   cd <NOMBRE_DEL_REPOSITORIO>
   ```

2. **Configurar el proyecto**: Abre una terminal y navega al directorio del proyecto. Luego, ejecuta el siguiente comando para configurar el proyecto:

   ```bash
   idf.py menuconfig
   ```

   Asegúrate de que la configuración del puerto serie y otros parámetros sean correctos.

3. **Compilar el proyecto**: Ejecuta el siguiente comando para compilar el proyecto:

   ```bash
   idf.py build
   ```

4. **Cargar el firmware en la ESP32**: Una vez que la compilación haya finalizado, carga el firmware en la ESP32 con el siguiente comando:

   ```bash
   idf.py flash
   ```

   Reemplaza `<PUERTO_SERIE>` con el puerto correspondiente (por ejemplo, `/dev/ttyUSB0` en Linux o `COM3` en Windows).

5. **Monitorear la salida**: Para ver la salida del log, ejecuta:

   ```bash
   idf.py  monitor
   ```

## Funcionamiento

El código en `bootcamp_huertics.c` configura el GPIO 2 como salida y alterna el estado del LED cada 5 segundos, encendiéndolo y apagándolo respectivamente. Los mensajes de estado se registran en la consola.

## Notas

- Puedes modificar los tiempos de espera en el código para ajustar la frecuencia de parpadeo del LED.