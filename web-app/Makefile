serve-index:
	python -m http.server

power-consumption-worker:
	while :; do python worker.py; done

websocket-publisher:
	websocketd --port=8001 tail -f results.csv
