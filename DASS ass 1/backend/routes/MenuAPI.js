var express = require("express");
var router = express.Router();


const Vendor = require("../models/Vendor");
const FoodItem = require("../models/foodItem");
// const MyOrder= require("./models/myorderB");

router.get("/menu", async function (req, res) {
    const foods = await FoodItem.find()
    // const foods = await fds.json()
    foods.map(async (f) => {
        const vEmail = f.VendorEmail
        const v = await Vendor.findOne({ email: vEmail })
        console.log(v)
        console.log(f)
    })
    console.log(foods)
    res.json(foods)
});

router.get("/getshopName", (req, res) => {
    Vendor.find(function (err, users) {
        if (err) {
            console.log(err);
        } else {
            res.json(users);
        }
    })
    
});


// router.post("/placeorder", (req, res) => {
//     const email = req.body.email
//     Vendor.findOne({ email: email }, (err, vendor) => {
//         if (err) {
//             console.log(err)
//         } else {
//             res.json({
//                 shopName: vendor.shopName
//             })
//         }
//     })
// });

module.exports = router;

