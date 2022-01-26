const mongoose = require("mongoose");
const Schema = mongoose.Schema;

// Create Schema
const FoodSchema = new Schema({
    vendoremail: {
        type: String,
        required: true

    },
	FoodName: {
		type: String,
		required: true
	},
	price:{
		type: Number,
		required: true
	},
    rating: {
        type: Number,
        required: true
    },
    type: {
        type: Number,
        required: true
    },
	tags: [{
        type: String,
		required: false
	}],
    addon: [{
        type: String,
        required: false
    }],
    addonPrice: [{
        type: Number,
        required: false
    }]

});

module.exports = Food = mongoose.model("FoodItem", FoodSchema);
