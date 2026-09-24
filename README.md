**Título del Proyecto:** Sistema de Control Digital Adaptativo en Lazo Cerrado para Iluminación Automotriz

**Objetivo General:**
Diseñar e implementar un sistema mecatrónico de control de iluminación para faros utilizando un microcontrolador ESP32. El sistema ajusta dinámicamente la intensidad luminosa de lámparas incandescentes en respuesta a los niveles de luz ambiental, garantizando una visibilidad óptima y compensando perturbaciones físicas mediante una arquitectura de lazo cerrado.

**Arquitectura de Control (Estrategia):**
El proyecto se fundamenta en un esquema de control que combina dos lógicas de instrumentación:

* **Cálculo Dinámico de Referencia (Feedforward):** Un sensor óptico exterior (LDR) mide la intensidad de la luz ambiental. Esta lectura es procesada matemáticamente por el algoritmo para calcular y establecer el *setpoint* (nivel de iluminación ideal requerido en ese instante específico).
* **Regulación en Lazo Cerrado (Feedback):** Un segundo sensor óptico retroalimenta la intensidad luminosa real emitida por el sistema. El controlador digital implementado en el ESP32 (como un algoritmo PID discreto) calcula el error entre la luz real y el *setpoint*, ajustando el ciclo de trabajo de la señal PWM enviada a la etapa de potencia.

**Hardware y Elementos de la Planta:**

* **Unidad de Procesamiento:** Microcontrolador ESP32 operando como el controlador digital central.
* **Sensores:** Resistencias dependientes de luz (LDR) acondicionadas mediante los convertidores analógico-digitales (ADC) del sistema.Título del Proyecto: Sistema de Control Digital Adaptativo en Lazo Cerrado para Iluminación Automotriz

Objetivo General:
Diseñar e implementar un sistema mecatrónico de control de iluminación para faros utilizando un microcontrolador ESP32. El sistema ajusta dinámicamente la intensidad luminosa de lámparas incandescentes en respuesta a los niveles de luz ambiental, garantizando una visibilidad óptima y compensando perturbaciones físicas mediante una arquitectura de lazo cerrado.

Arquitectura de Control (Estrategia):
El proyecto se fundamenta en un esquema de control que combina dos lógicas de instrumentación:

    Cálculo Dinámico de Referencia (Feedforward): Un sensor óptico exterior (LDR) mide la intensidad de la luz ambiental. Esta lectura es procesada matemáticamente por el algoritmo para calcular y establecer el setpoint (nivel de iluminación ideal requerido en ese instante específico).

    Regulación en Lazo Cerrado (Feedback): Un segundo sensor óptico retroalimenta la intensidad luminosa real emitida por el sistema. El controlador digital implementado en el ESP32 (como un algoritmo PID discreto) calcula el error entre la luz real y el setpoint, ajustando el ciclo de trabajo de la señal PWM enviada a la etapa de potencia.

Hardware y Elementos de la Planta:

    Unidad de Procesamiento: Microcontrolador ESP32 operando como el controlador digital central.

    Sensores: Resistencias dependientes de luz (LDR) acondicionadas mediante los convertidores analógico-digitales (ADC) del sistema.

    Actuador y Planta: Etapa de potencia aislada mediante optoacoplador y controlada por un MOSFET, encargada de modular la energía entregada a faros incandescentes con inercia térmica significativa.

Justificación Técnica (El valor del Control Digital):
A diferencia de los enfoques convencionales de lazo abierto que simplemente aplican una tabla de valores fijos (luz ambiental vs. porcentaje de PWM), este diseño rechaza activamente las perturbaciones internas de la planta. El controlador compensa variables como la caída de tensión en la fuente de alimentación y el retardo térmico del filamento de tungsteno, asegurando que la intensidad lumínica real alcance y mantenga la referencia calculada de forma rápida y estable.
