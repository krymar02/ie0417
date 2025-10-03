from flask import Flask, jsonify
import os

app = Flask(__name__)

@app.route('/')
def index():
    saludo = os.getenv('SALUDO', 'Hola, clase IE0417')
    return jsonify({"ok": True, "mensaje": saludo})

@app.route('/health')
def health():
    return jsonify({"status": "ok"}), 200

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)
