#ifdef GL_ES
precision mediump float;
#endif

varying vec2 texCoord0;
varying vec3 normal0;

uniform sampler2D diffuse; 

void main() {
	gl_FragColor = vec4(1.0, 0.0, 0.0, 1.0);
}