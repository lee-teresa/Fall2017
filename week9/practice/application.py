from flask import Flask, render_template, request
app = Flask(__name__)

@app.route("/", methods=["GET", "POST"])
def mult_table():
    if request.method == "GET":
	    return render_template("form.html")
    else:
        return render_template("table.html", dim=int(request.form.get("size")))


